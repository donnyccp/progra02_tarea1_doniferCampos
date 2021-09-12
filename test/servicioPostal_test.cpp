#include <gtest/gtest.h>
#include "../src/servicioPostal.h"

namespace
{
    TEST(ServicioPostalTests, CalculoEnvio_Test)
    {
        ServicioPostal servicioPostal{4.0, 2.0, 1};
        float actual = servicioPostal.CalculoEnvio();
        EXPECT_FLOAT_EQ(0.900, actual);
    }
}