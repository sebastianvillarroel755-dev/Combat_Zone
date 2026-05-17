#include "Nave_Pesada.h"

// Nave pesada: lenta pero solida
ANave_Pesada::ANave_Pesada()
{
    VelocidadMovimiento = 180.f;
    TiempoDisparo = 3.0f; // Dispara lento pero seguro
}

// POLIMORFISMO: va directo sin oscilar, mas predecible pero imparable
void ANave_Pesada::MovimientoAleatorio()
{
    // Sin oscilacion, avanza directo en su direccion actual
    FVector NuevaPosicion = GetActorLocation() +
        (DireccionActual * VelocidadMovimiento * GetWorld()->GetDeltaSeconds());
    SetActorLocation(NuevaPosicion);
}