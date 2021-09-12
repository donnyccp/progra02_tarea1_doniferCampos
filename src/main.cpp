#ifndef UNIT_TEST

#include <iostream>
#include <vector>
#include "Envio.h"
#include "servicioPostal.h"
#include "fedEx.h"

using namespace std;

int main()
{

    FedEx *FedEx1 = new FedEx(500.0, 4.0);
    //FedEx *FedEx2 = new FedEx(600.0, 5.0);
    //FedEx *FedEx3 = new FedEx(700.0, 3.0);
    FedEx *FedEx4 = new FedEx(400.0, 3.0);

    //ServicioPostal *servicioPostal1 = new ServicioPostal(2.0, 10.0, 1);
    //ServicioPostal *servicioPostal2 = new ServicioPostal(5.0, 265.0, 2);
    ServicioPostal *servicioPostal3 = new ServicioPostal(10.0, 100.0, 3);

    std::vector<Envio *> arregloEnvios;
    arregloEnvios.push_back(FedEx1);
    arregloEnvios.push_back(FedEx4);
    arregloEnvios.push_back(servicioPostal3);

    double totalMontoEnvios = 0;
    for (Envio *envio : arregloEnvios)
    {
        totalMontoEnvios += envio->CalculoEnvio();
    }
    std::cout << "El monto total de los envíos es de " << totalMontoEnvios << std::endl;

    delete FedEx1;
    //delete FedEx2;
    //delete FedEx3;
    delete FedEx4;

    //delete servicioPostal1;
    //delete servicioPostal2;
    delete servicioPostal3;

  


    return 0;
}

#endif