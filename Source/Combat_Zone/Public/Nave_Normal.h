#pragma once
#include "CoreMinimal.h"
#include "EnemigosAnormales_.h"
#include "Nave_Normal.generated.h"

// CLASE HIJA: Nave normal — aplica HERENCIA
// Estadisticas equilibradas, usa el movimiento del padre
UCLASS()
class COMBAT_ZONE_API ANave_Normal : public AEnemigosAnormales_
{
    GENERATED_BODY()

public:
    ANave_Normal();
    // Usa MovimientoAleatorio y Disparar del padre sin cambios
};