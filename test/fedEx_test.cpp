#include <gtest/gtest.h>
#include "../src/fedEx.h"

namespace
{
    TEST(FedExTests, CalculoEnvio_sinRecargo_Test)
    {
        FedEx fedEx{400.0, 4.0};
        float actual = fedEx.CalculoEnvio();
        EXPECT_FLOAT_EQ(20.0, actual);
    }

     TEST(FedExTests, CalculoEnvio_conRecargo_peso_Test)
    {
        FedEx fedEx{400.0, 6.0};
        float actual = fedEx.CalculoEnvio();
        EXPECT_FLOAT_EQ(23.0, actual);
    }

     TEST(FedExTests, CalculoEnvio_conRecargo_pesoDistancia_Test)
    {
        FedEx fedEx{600.0, 6.0};
        float actual = fedEx.CalculoEnvio();
        EXPECT_FLOAT_EQ(28.0, actual);
    }

     TEST(FedExTests, CalculoEnvio_conRecargo_distacia_Test)
    {
        FedEx fedEx{600.0, 3.0};
        float actual = fedEx.CalculoEnvio();
        EXPECT_FLOAT_EQ(25.0, actual);
    }

}
