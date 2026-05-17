#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo_BaseGeneral.generated.h"

class UStaticMeshComponent;

// CLASE BASE GENERAL de todos los enemigos del juego
// De aqui hereda AEnemigosAnormales_ que a su vez genera las naves
// Contiene movimiento libre y disparo basico
UCLASS()
class AEnemigo_BaseGeneral : public AActor
{
    GENERATED_BODY()

public:
    AEnemigo_BaseGeneral();

    // Figura 3D visible del enemigo
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly,
        Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* MeshEnemigo;

    // Velocidad de movimiento libre
    UPROPERTY(EditAnywhere, Category = "Configuracion")
    float VelocidadMovimiento;

    // Clase del proyectil que dispara
    UPROPERTY(EditAnywhere, Category = "Disparo")
    TSubclassOf<class ACombat_ZoneProjectile> ClaseProyectil;

    // Referencia al jugador para dispararle directo
    AActor* Jugador;

protected:
    virtual void BeginPlay() override;

    // VIRTUAL: las hijas pueden cambiar el movimiento (POLIMORFISMO)
    virtual void MovimientoAleatorio();

    // VIRTUAL: las hijas pueden cambiar el disparo (POLIMORFISMO)
    virtual void Disparar();

    // Timer del disparo automatico
    FTimerHandle TimerDisparo;

    // Timer para cambiar direccion cada cierto tiempo
    FTimerHandle TimerCambioDireccion;

    // Direccion actual de movimiento
    FVector DireccionActual;

    // Cambia la direccion aleatoriamente
    void CambiarDireccion();

public:
    virtual void Tick(float DeltaTime) override;
};