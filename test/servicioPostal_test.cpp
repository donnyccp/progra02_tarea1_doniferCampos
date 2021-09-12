#include <gtest/gtest.h>
#include "../src/servicioPostal.h"

namespace
{
    TEST(ServicioPostalTests, CalculoEnvio_primeraClase_situacion1_Test)
    {
        ServicioPostal servicioPostal{2.0, 2.0, 1};
        float actual = servicioPostal.CalculoEnvio();
        EXPECT_FLOAT_EQ(0.390, actual);
    }

     TEST(ServicioPostalTests, CalculoEnvio_primeraClase_situacion2_Test)
    {
        ServicioPostal servicioPostal{4.0, 2.0, 1};
        float actual = servicioPostal.CalculoEnvio();
        EXPECT_FLOAT_EQ(0.900, actual);
    }

     TEST(ServicioPostalTests, CalculoEnvio_primeraClase_situacion3_Test)
    {
        ServicioPostal servicioPostal{10.0, 2.0, 1};
        float actual = servicioPostal.CalculoEnvio();
        EXPECT_FLOAT_EQ(1.000, actual);
    }

     TEST(ServicioPostalTests, CalculoEnvio_segundaClase_situacion1_Test)
    {
        ServicioPostal servicioPostal{1.0, 3.0, 2};
        float actual = servicioPostal.CalculoEnvio();
        EXPECT_FLOAT_EQ(0.0585, actual);
    }

     TEST(ServicioPostalTests, CalculoEnvio_segundaClase_situacion2_Test)
    {
        ServicioPostal servicioPostal{5.0, 3.0, 2};
        float actual = servicioPostal.CalculoEnvio();
        EXPECT_FLOAT_EQ(0.135, actual);
    }

     TEST(ServicioPostalTests, CalculoEnvio_segundaClase_situacion3_Test)
    {
        ServicioPostal servicioPostal{11.0, 3.0, 2};
        float actual = servicioPostal.CalculoEnvio();
        EXPECT_FLOAT_EQ(0.150, actual);
    }

     TEST(ServicioPostalTests, CalculoEnvio_terceraClase_situacion1_Test)
    {
        ServicioPostal servicioPostal{2.0, 2.0, 3};
        float actual = servicioPostal.CalculoEnvio();
        EXPECT_FLOAT_EQ(0.030, actual);
    }

     TEST(ServicioPostalTests, CalculoEnvio_terceraClase_situacion2_Test)
    {
        ServicioPostal servicioPostal{4.0, 2.0, 3};
        float actual = servicioPostal.CalculoEnvio();
        EXPECT_FLOAT_EQ(0.032, actual);
    }

     TEST(ServicioPostalTests, CalculoEnvio_terceraClase_situacion3_Test)
    {
        ServicioPostal servicioPostal{10.0, 2.0, 3};
        float actual = servicioPostal.CalculoEnvio();
        EXPECT_FLOAT_EQ(0.034, actual);
    }
}