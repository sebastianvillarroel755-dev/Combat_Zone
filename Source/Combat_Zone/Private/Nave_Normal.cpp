#include "Nave_Normal.h"

// Nave normal: equilibrada en velocidad y disparo
// Hereda movimiento y disparo del padre sin cambios
ANave_Normal::ANave_Normal()
{
    VelocidadMovimiento = 350.f;
    TiempoDisparo = 1.5f;
}