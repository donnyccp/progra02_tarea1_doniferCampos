#include "fedEx.h"
#include <string>

FedEx::FedEx(float distanciaAEnviar, float pesoAEnviar)
{
    this->distancia = distanciaAEnviar;
    this->peso = pesoAEnviar;
}

float FedEx::CalculoEnvio()
{

    if (this->peso <= 4.0 && this->distancia <= 500.0)
    {
        return costo;
    }
    else if (this->peso > 4.0 && this->distancia > 500.0)
    {
        return costo + 5.0 + 3.0;
    }
    else if (this->peso <= 4.0 && this->distancia > 500.0)
    {
        return costo + 5.0;
    }
    else if (this->peso > 4.0 && this->distancia <= 500.0)
    {
        return costo + 3.0;
    }
}
