#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Combat_ZoneGameMode.generated.h"

// GameMode principal del juego
// Spawna enemigos aleatorios cada cierto tiempo
// Los guarda en el contenedor TArray
UCLASS(MinimalAPI)
class ACombat_ZoneGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ACombat_ZoneGameMode();

protected:
    virtual void BeginPlay() override;

    // Spawna una nave aleatoria de las clases disponibles
    void SpawnEnemigo();

    // CONTENEDOR de todos los enemigos spawneados
    TArray<AActor*> Enemigos;

    // Tipos de naves disponibles para spawnear
    UPROPERTY(EditAnywhere, Category = "Spawn")
    TArray<TSubclassOf<class AEnemigosAnormales_>> ClasesEnemigos;

    // Cada cuantos segundos aparece un enemigo nuevo
    UPROPERTY(EditAnywhere, Category = "Spawn")
    float TiempoSpawn;

    FTimerHandle TimerSpawn;
};