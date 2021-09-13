#include "servicioPostal.h"
#include <string>

ServicioPostal::ServicioPostal(float pesoAEnviar, float kilometrosAEnviar, int claseElegida)
{
    this->peso = pesoAEnviar;
    this->kilometros = kilometrosAEnviar;
    this->clase = claseElegida;
}

float ServicioPostal::CalculoEnvio()
{
    switch (this->clase)
    {
    case 1:
        if (this->peso <= 3.0 && this->peso >= 1.00)
        {
            return 0.195 * this->kilometros;
        }
        else if (this->peso <= 8.0 && this->peso >= 4.00)
        {
            return 0.450 * this->kilometros;
        }
        else if (this->peso >= 9.00)
        {
            return 0.500 * this->kilometros;
        }

        break;

    case 2:
        if (this->peso <= 3.0 && this->peso >= 1.00)
        {
            return 0.0195 * kilometros;
        }
        else if (this->peso <= 8.0 && this->peso >= 4.00)
        {
            return 0.0450 * this->kilometros;
        }
        else if (this->peso >= 9.00)
        {
            return 0.0500 * this->kilometros;
        }

        break;

    case 3:
        if (this->peso <= 3.0 && this->peso >= 1.00)
        {
            return 0.0150 * this->kilometros;
        }
        else if (this->peso <= 8.0 && this->peso >= 4.00)
        {
            return 0.0160 * this->kilometros;
        }
        else if (this->peso >= 9.00)
        {
            return 0.0170 * this->kilometros;
        }
        break;
    }
}
