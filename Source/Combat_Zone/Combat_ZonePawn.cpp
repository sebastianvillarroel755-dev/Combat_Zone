// Copyright Epic Games, Inc. All Rights Reserved.

#include "Combat_ZonePawn.h"
#include "Combat_ZoneProjectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

const FName ACombat_ZonePawn::MoveForwardBinding("MoveForward");
const FName ACombat_ZonePawn::MoveRightBinding("MoveRight");
const FName ACombat_ZonePawn::FireForwardBinding("FireForward");
const FName ACombat_ZonePawn::FireRightBinding("FireRight");

ACombat_ZonePawn::ACombat_ZonePawn()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(
		TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO")
	);

	// Malla de la nave
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));

	RootComponent = ShipMeshComponent;

	ShipMeshComponent->SetCollisionProfileName(
		UCollisionProfile::Pawn_ProfileName
	);

	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);

	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(
		TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire")
	);

	FireSound = FireAudio.Object;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(
		TEXT("CameraBoom")
	);

	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->SetUsingAbsoluteRotation(false);

	CameraBoom->TargetArmLength = 900.f;

	CameraBoom->SetRelativeRotation(
		FRotator(-10.f, 0.f, 0.f)
	);

	CameraBoom->SetRelativeLocation(
		FVector(0.f, 0.f, 60.f)
	);

	CameraBoom->bEnableCameraLag = true;

	CameraBoom->CameraLagSpeed = 5.f;

	CameraBoom->bDoCollisionTest = false;

	// Cámara principal
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(
		TEXT("TopDownCamera")
	);

	CameraComponent->SetupAttachment(
		CameraBoom,
		USpringArmComponent::SocketName
	);

	CameraComponent->bUsePawnControlRotation = false;
	MoveSpeed = 1000.0f;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
}

void ACombat_ZonePawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
}

void ACombat_ZonePawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = MoveDirection.Rotation();
		SetActorRotation(NewRotation);
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement,GetActorRotation(),true,&Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection,GetActorRotation(),true);
		}
	}
	
	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);
}

void ACombat_ZonePawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<ACombat_ZoneProjectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ACombat_ZonePawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void ACombat_ZonePawn::ShotTimerExpired()
{
	bCanFire = true;
}

