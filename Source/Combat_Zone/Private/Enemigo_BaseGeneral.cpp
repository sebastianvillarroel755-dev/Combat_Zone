#include "Enemigo_BaseGeneral.h"
#include "../Combat_ZoneProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

// Constructor base, crea la figura y valores iniciales
AEnemigo_BaseGeneral::AEnemigo_BaseGeneral()
{
    PrimaryActorTick.bCanEverTick = true;
    VelocidadMovimiento = 300.f;
    DireccionActual = FVector::ZeroVector;

    // Crear componente visual
    MeshEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshEnemigo"));
    RootComponent = MeshEnemigo;

    // Figura de toro del StarterContent
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
        TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
    if (MeshAsset.Succeeded())
    {
        MeshEnemigo->SetStaticMesh(MeshAsset.Object);
    }
}

void AEnemigo_BaseGeneral::BeginPlay()
{
    Super::BeginPlay();

    // Obtener referencia al jugador para dispararle directo
    Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    // Direccion inicial aleatoria para el movimiento libre
    DireccionActual = FVector(
        FMath::FRandRange(-1.f, 1.f),
        FMath::FRandRange(-1.f, 1.f),
        0.f).GetSafeNormal();

    // Disparar cada 2 segundos directo al jugador
    GetWorldTimerManager().SetTimer(
        TimerDisparo,
        this,
        &AEnemigo_BaseGeneral::Disparar,
        2.0f,
        true);

    // Cambiar direccion cada 2 segundos para movimiento libre
    GetWorldTimerManager().SetTimer(
        TimerCambioDireccion,
        this,
        &AEnemigo_BaseGeneral::CambiarDireccion,
        2.0f,
        true);
}

void AEnemigo_BaseGeneral::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    MovimientoAleatorio();
}

// Movimiento libre: avanza en la direccion actual
// La direccion cambia cada 2 segundos por el timer
void AEnemigo_BaseGeneral::MovimientoAleatorio()
{
    FVector NuevaPosicion = GetActorLocation() +
        (DireccionActual * VelocidadMovimiento * GetWorld()->GetDeltaSeconds());
    SetActorLocation(NuevaPosicion);
}

// Cambia la direccion de movimiento aleatoriamente
// Se llama cada 2 segundos para que el movimiento sea libre y no rigido
void AEnemigo_BaseGeneral::CambiarDireccion()
{
    DireccionActual = FVector(
        FMath::FRandRange(-1.f, 1.f),
        FMath::FRandRange(-1.f, 1.f),
        0.f).GetSafeNormal();
}

// Dispara directo hacia donde esta el jugador
// No hacia donde mira la nave sino a la posicion real del jugador
void AEnemigo_BaseGeneral::Disparar()
{
    if (!ClaseProyectil || !Jugador) return;

    // Calcular direccion exacta hacia el jugador
    FVector DireccionAlJugador = (Jugador->GetActorLocation() -
        GetActorLocation()).GetSafeNormal();

    FVector  SpawnLocation = GetActorLocation() + DireccionAlJugador * 150.f;
    FRotator SpawnRotation = DireccionAlJugador.Rotation();

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;
    SpawnParams.Instigator = GetInstigator();
    SpawnParams.SpawnCollisionHandlingOverride =
        ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    GetWorld()->SpawnActor<ACombat_ZoneProjectile>(
        ClaseProyectil, SpawnLocation, SpawnRotation, SpawnParams);

    UE_LOG(LogTemp, Warning, TEXT("Enemigo base disparando al jugador!"));
}