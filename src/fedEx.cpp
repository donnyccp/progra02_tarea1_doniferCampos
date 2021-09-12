#include "fedEx.h"
#include <string>

FedEx::FedEx(float distanciaAEnviar, float pesoAEnviar)
{
    this->distancia=distanciaAEnviar;
    this->peso=pesoAEnviar;
}



float FedEx::CalculoEnvio(){
    switch (this->distancia, this->peso)
    {
    case peso<=4.0 && distancia<=500.00:
        return costo;
        break;
        
    case peso>4.0 && distancia>500.00:
        return costo+5.00+3.00;
        break;

     case peso<4.0 && distancia>500.00:
        return costo+5.00;
        break;

     case peso>4.0 && distancia>500.00:
        return costo+3.00;
        break;
    
    default:
        break;
    }
}