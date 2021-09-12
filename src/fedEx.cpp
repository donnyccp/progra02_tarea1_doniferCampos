#include "fedEx.h"
#include <string>

FedEx::FedEx(float distanciaAEnviar, float pesoAEnviar)
{
    distancia = distanciaAEnviar;
    peso = pesoAEnviar;
}

float FedEx::CalculoEnvio()
{

    if (peso <= 4.0 && distancia <= 500.0)
    {

        return costo;
    }
    else if (peso > 4.0 && distancia > 500.0)
    {
        return costo + 5.0 + 3.0;
    }
    else if (peso <= 4.0 && distancia > 500.0)
    {
        return costo + 5.0;
    }
    else if (peso > 4.0 && distancia <= 500.0)
    {
        return costo + 3.0;
    }
}
