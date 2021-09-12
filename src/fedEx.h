#ifndef FEDEX_H
#define FEDEX_H

#include "Envio.h"
#include <string>

class FedEx : public Envio {

    float distancia;
    float peso;
    float costo=20.0;

    public:
    FedEx(float, float);
    virtual float CalculoEnvio();


};
#endif