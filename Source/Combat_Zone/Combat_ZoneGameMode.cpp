#include "Combat_ZoneGameMode.h"
#include "Combat_ZonePawn.h"
#include "EnemigosAnormales_.h"
#include "Nave_Normal.h"
#include "Nave_Liviana.h"
#include "Nave_Pesada.h"
#include "Kismet/KismetMathLibrary.h"
#include "TimerManager.h"
#include "Engine/World.h"

ACombat_ZoneGameMode::ACombat_ZoneGameMode()
{
    DefaultPawnClass = ACombat_ZonePawn::StaticClass();
    TiempoSpawn = 3.0f;

    // Agregar las 3 clases de naves al contenedor de clases
    ClasesEnemigos.Add(ANave_Normal::StaticClass());
    ClasesEnemigos.Add(ANave_Liviana::StaticClass());
    ClasesEnemigos.Add(ANave_Pesada::StaticClass());
}

// Corre una vez al iniciar
// Arranca el timer que spawna enemigos cada TiempoSpawn segundos
void ACombat_ZoneGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Spawnear un enemigo de cada tipo al inicio para que no este vacio
    UWorld* World = GetWorld();
    if (World)
    {
        // Uno de cada tipo al arrancar
        TArray<TSubclassOf<AEnemigosAnormales_>> TiposIniciales = {
            ANave_Liviana::StaticClass(),
            ANave_Normal::StaticClass(),
            ANave_Pesada::StaticClass()
        };

        for (auto& Clase : TiposIniciales)
        {
            FVector Pos = FVector(
                FMath::FRandRange(-1500.f, 1500.f),
                FMath::FRandRange(-1500.f, 1500.f),
                200.f);

            AActor* Enemigo = World->SpawnActor<AEnemigosAnormales_>(
                Clase, Pos, FRotator::ZeroRotator);

            // Guardar en el contenedor TArray
            if (Enemigo) Enemigos.Add(Enemigo);
        }
    }

    // Seguir spawneando enemigos aleatorios cada TiempoSpawn segundos
    GetWorldTimerManager().SetTimer(
        TimerSpawn,
        this,
        &ACombat_ZoneGameMode::SpawnEnemigo,
        TiempoSpawn,
        true);
}

// Spawna una nave aleatoria de las clases disponibles
// La guarda en el contenedor TArray de enemigos
void ACombat_ZoneGameMode::SpawnEnemigo()
{
    UWorld* World = GetWorld();
    if (!World || ClasesEnemigos.Num() == 0) return;

    // Elegir una clase aleatoria de las disponibles
    int32 Indice = FMath::RandRange(0, ClasesEnemigos.Num() - 1);
    TSubclassOf<AEnemigosAnormales_> ClaseElegida = ClasesEnemigos[Indice];

    if (!ClaseElegida) return;

    // Posicion aleatoria en los bordes del mapa
    FVector SpawnLocation = FVector(
        FMath::FRandRange(-1500.f, 1500.f),
        FMath::FRandRange(-1500.f, 1500.f),
        200.f);

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride =
        ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    // Spawnear y guardar en el contenedor
    AActor* NuevoEnemigo = World->SpawnActor<AEnemigosAnormales_>(
        ClaseElegida, SpawnLocation, FRotator::ZeroRotator, SpawnParams);

    if (NuevoEnemigo)
    {
        Enemigos.Add(NuevoEnemigo); // Guardar en el CONTENEDOR TArray
        UE_LOG(LogTemp, Warning, TEXT("Enemigo spawneado. Total: %d"),
            Enemigos.Num());
    }
}