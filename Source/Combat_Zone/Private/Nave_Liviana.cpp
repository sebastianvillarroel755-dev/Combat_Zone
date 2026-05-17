#include "Nave_Liviana.h"

// Nave liviana: muy rapida y dispara seguido
ANave_Liviana::ANave_Liviana()
{
    VelocidadMovimiento = 700.f;
    TiempoDisparo = 0.6f; // Dispara muy seguido
}

// POLIMORFISMO: la liviana oscila mientras se mueve
// mas impredecible que el padre
void ANave_Liviana::MovimientoAleatorio()
{
    TiempoOscilacion += GetWorld()->GetDeltaSeconds() * 4.0f;

    // Oscilacion lateral para que sea mas dificil de esquivar
    FVector Lateral = FVector(-DireccionActual.Y, DireccionActual.X, 0.f);
    float   Oscilacion = FMath::Sin(TiempoOscilacion) * 200.f *
        GetWorld()->GetDeltaSeconds();

    FVector NuevaPosicion = GetActorLocation()
        + (DireccionActual * VelocidadMovimiento * GetWorld()->GetDeltaSeconds())
        + (Lateral * Oscilacion);

    SetActorLocation(NuevaPosicion);
}