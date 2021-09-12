#include "servicioPostal.h"
#include <string>

ServicioPostal::ServicioPostal(float pesoAEnviar, float kilometrosAEnviar, int claseElegida)
{
    peso = pesoAEnviar;
    kilometros = kilometrosAEnviar;
    clase = claseElegida;
}

float ServicioPostal::CalculoEnvio()
{
    switch (clase)
    {
    case 1:
        if (peso <= 3.0 && peso >= 1.00)
        {
            return 0.195 * kilometros;
        }
        else if (peso <= 8.0 && peso >= 4.00)
        {
            return 0.450 * kilometros;
        }
        else if (peso >= 9.00)
        {
            return 0.500 * kilometros;
        }

        break;

    case 2:
        if (peso <= 3.0 && peso >= 1.00)
        {
            return 0.0195 * kilometros;
        }
        else if (peso <= 8.0 && peso >= 4.00)
        {
            return 0.0450 * kilometros;
        }
        else if (peso >= 9.00)
        {
            return 0.0500 * kilometros;
        }

        break;

    case 3:
        if (peso <= 3.0 && peso >= 1.00)
        {
            return 0.0150 * kilometros;
        }
        else if (peso <= 8.0 && peso >= 4.00)
        {
            return 0.0160 * kilometros;
        }
        else if (peso >= 9.00)
        {
            return 0.0170 * kilometros;
        }
        break;
    }
}
