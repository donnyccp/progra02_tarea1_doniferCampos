#include "servicioPostal.h"
#include <string>

ServicioPostal::ServicioPostal(float pesoAEnviar, float kilometrosAEnviar, int claseElegida)
{
    this->peso=pesoAEnviar;
    this->kilometros=kilometrosAEnviar;
    this->clase=claseElegida;
}



float ServicioPostal::CalculoEnvio()
{
    switch (this->peso, this->kilometros, this->clase)
    {
    case clase=1:
        switch (this->peso, this->kilometros)
        {
            case peso<=3.0 && peso>=1.00:
            return 0.195*kilometros;
            break;
            case peso<=8.0 && peso>=4.00:
            return 0.450*kilometros;
            break;
            case peso>=9.00:
            return 0.500*kilometros;
            break;
        }
        break;
        
    case clase=2:
        switch (this->peso, this->kilometros)
        {
            case peso<=3.0 && peso>=1.00:
            return 0.0195*kilometros;
            break;
            case peso<=8.0 && peso>=4.00:
            return 0.0450*kilometros;
            break;
            case peso>=9.00:
            return 0.0500*kilometros;
            break;
        }
        break;

    case clase=3:
        switch (this->peso, this->kilometros)
        {
            case peso<=3.0 && peso>=1.00:
            return 0.0150*kilometros;
            break;
            case peso<=8.0 && peso>=4.00:
            return 0.0160*kilometros;
            break;
            case peso>=9.00:
            return 0.0170*kilometros;
            break;
        }
        break;
    default:
        break;
    }
}