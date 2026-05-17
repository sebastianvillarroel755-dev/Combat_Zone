#pragma once
#include "CoreMinimal.h"
#include "EnemigosAnormales_.h"
#include "Nave_Pesada.generated.h"

// CLASE HIJA: Nave pesada — aplica HERENCIA
// Lenta pero dispara proyectiles mas espaciados
// POLIMORFISMO: se mueve directo sin oscilar
UCLASS()
class COMBAT_ZONE_API ANave_Pesada : public AEnemigosAnormales_
{
    GENERATED_BODY()

public:
    ANave_Pesada();

    // POLIMORFISMO: movimiento recto sin oscilacion
    virtual void MovimientoAleatorio() override;
};