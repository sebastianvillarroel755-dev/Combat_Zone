#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "../Combat_ZoneProjectile.h"
#include "EnemigosAnormales_.generated.h"

// CLASE PADRE de las naves normales
// De aqui heredan Nave_Liviana, Nave_Normal y Nave_Pesada
// Se mueve libremente y dispara directo al jugador
UCLASS()
class COMBAT_ZONE_API AEnemigosAnormales_ : public APawn
{
    GENERATED_BODY()

public:
    AEnemigosAnormales_();

    // Figura 3D visible de la nave
    UPROPERTY(VisibleAnywhere, Category = "Visual")
    class UStaticMeshComponent* NaveMesh;

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // VIRTUAL: cada hija puede cambiar el movimiento (POLIMORFISMO)
    virtual void MovimientoAleatorio();

    // VIRTUAL: cada hija puede cambiar el disparo (POLIMORFISMO)
    virtual void Disparar();

    // Direccion actual de movimiento
    FVector DireccionActual;

    // Referencia al jugador para dispararle directo
    AActor* Jugador;

    UPROPERTY(EditAnywhere, Category = "Disparo")
    TSubclassOf<ACombat_ZoneProjectile> ClaseProyectil;

    UPROPERTY(EditAnywhere, Category = "Movimiento")
    float VelocidadMovimiento;

    UPROPERTY(EditAnywhere, Category = "Disparo")
    float TiempoDisparo;

    FTimerHandle TimerDisparo;

    // Timer para cambiar de direccion cada cierto tiempo
    FTimerHandle TimerCambioDireccion;

    // Cambia la direccion de movimiento aleatoriamente
    void CambiarDireccion();
};