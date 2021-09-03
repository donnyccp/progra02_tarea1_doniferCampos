#ifndef UNIT_TEST

#include <iostream>
#include "Envio.h"
#include "servicioPostal.h"
#include "fedEx.h"


using namespace std;

int main(){

    double totalMontoEnvios = 0;
        for (Envio* envio : arregloEnvios)
        {
                totalMontoEnvios += envio->CalculoEnvio();
        }
        std::cout << "El monto total de los envíos es de " << totalMontoEnvios << std::endl;


    return 0;
}

#endif