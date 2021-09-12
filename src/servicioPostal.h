#ifndef SERVICIOPOSTAL_H
#define SERVICIOPOSTAL_H

#include "Envio.h"
#include <string>

class ServicioPostal : public Envio {

    float peso; 
    float kilometros; 
    int clase;

    public:
    ServicioPostal(float, float, int);
    virtual float CalculoEnvio();


};
#endif