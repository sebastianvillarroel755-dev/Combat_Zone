#include "EnemigosAnormales_.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "TimerManager.h"

AEnemigosAnormales_::AEnemigosAnormales_()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear componente visual
    NaveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveVisualMesh"));
    RootComponent = NaveMesh;

    // Figura de esfera del engine
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
        TEXT("/Engine/BasicShapes/Sphere.Sphere"));
    if (MeshAsset.Succeeded())
    {
        NaveMesh->SetStaticMesh(MeshAsset.Object);
        NaveMesh->SetWorldScale3D(FVector(0.5f));
    }

    // Cargar clase del proyectil del template
    static ConstructorHelpers::FClassFinder<ACombat_ZoneProjectile> ProyectilBP(
        TEXT("/Game/TwinStickCPP/Blueprints/TwinStickProjectile"));
    if (ProyectilBP.Succeeded())
    {
        ClaseProyectil = ProyectilBP.Class;
    }

    VelocidadMovimiento = 300.f;
    TiempoDisparo = 2.f;
}

void AEnemigosAnormales_::BeginPlay()
{
    Super::BeginPlay();

    // Obtener referencia al jugador para dispararle directo
    Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    // Direccion inicial aleatoria
    DireccionActual = FVector(
        FMath::FRandRange(-1.f, 1.f),
        FMath::FRandRange(-1.f, 1.f),
        0.f).GetSafeNormal();

    // Disparar al jugador cada TiempoDisparo segundos
    GetWorldTimerManager().SetTimer(
        TimerDisparo,
        this,
        &AEnemigosAnormales_::Disparar,
        TiempoDisparo,
        true);

    // Cambiar direccion cada 2 segundos para movimiento libre
    GetWorldTimerManager().SetTimer(
        TimerCambioDireccion,
        this,
        &AEnemigosAnormales_::CambiarDireccion,
        2.0f,
        true);
}

void AEnemigosAnormales_::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    MovimientoAleatorio();
}

// Movimiento libre: avanza en la direccion actual
// La direccion cambia cada 2 segundos por el timer
void AEnemigosAnormales_::MovimientoAleatorio()
{
    FVector NuevaPosicion = GetActorLocation() +
        (DireccionActual * VelocidadMovimiento * GetWorld()->GetDeltaSeconds());
    SetActorLocation(NuevaPosicion);
}

// Cambia la direccion de movimiento aleatoriamente
// Se llama cada 2 segundos para que el movimiento sea libre y no rigido
void AEnemigosAnormales_::CambiarDireccion()
{
    DireccionActual = FVector(
        FMath::FRandRange(-1.f, 1.f),
        FMath::FRandRange(-1.f, 1.f),
        0.f).GetSafeNormal();
}

// Dispara directo hacia donde esta el jugador
// No hacia donde mira la nave sino hacia el jugador
void AEnemigosAnormales_::Disparar()
{
    if (!ClaseProyectil || !Jugador) return;

    // Calcular direccion directo al jugador
    FVector DireccionAlJugador = (Jugador->GetActorLocation() -
        GetActorLocation()).GetSafeNormal();

    // Spawnear el proyectil apuntando al jugador
    FVector   SpawnLocation = GetActorLocation() + DireccionAlJugador * 150.f;
    FRotator  SpawnRotation = DireccionAlJugador.Rotation();

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;
    SpawnParams.Instigator = GetInstigator();
    SpawnParams.SpawnCollisionHandlingOverride =
        ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    GetWorld()->SpawnActor<ACombat_ZoneProjectile>(
        ClaseProyectil, SpawnLocation, SpawnRotation, SpawnParams);

    UE_LOG(LogTemp, Warning, TEXT("Nave disparando al jugador!"));
}