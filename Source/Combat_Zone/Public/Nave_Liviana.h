#pragma once
#include "CoreMinimal.h"
#include "EnemigosAnormales_.h"
#include "Nave_Liviana.generated.h"

// CLASE HIJA: Nave liviana — aplica HERENCIA
// La mas rapida, dispara muy seguido pero es fragil
// POLIMORFISMO: MovimientoAleatorio mas agresivo con cambios rapidos
UCLASS()
class COMBAT_ZONE_API ANave_Liviana : public AEnemigosAnormales_
{
    GENERATED_BODY()

public:
    ANave_Liviana();

    // POLIMORFISMO: movimiento mas agresivo que el padre
    virtual void MovimientoAleatorio() override;

private:
    float TiempoOscilacion = 0.0f;
};