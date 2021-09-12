#ifndef UNIT_TEST

#include <iostream>
#include "Envio.h"
#include "servicioPostal.h"
#include "fedEx.h"


using namespace std;

int main(){

    FedEx *FedEx1=new FedEx(500.0, 4.0);
    FedEx *FedEx2=new FedEx(600.0, 5.0);
    FedEx *FedEx3=new FedEx(700.0, 3.0);
    FedEx *FedEx4=new FedEx(400.0, 3.0);

    

    
    double totalMontoEnvios = 0;
        for (Envio* envio : arregloEnvios)
        {
                totalMontoEnvios += envio->CalculoEnvio();
        }
        std::cout << "El monto total de los envíos es de " << totalMontoEnvios << std::endl;


    return 0;
}

#endif