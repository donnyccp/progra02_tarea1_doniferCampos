#include <gtest/gtest.h>
#include "../src/fedEx.h"

namespace
{
    TEST(FedExTests, CalculoEnvio_Test)
    {
        FedEx fedEx{600.0, 6.0};
        float actual = fedEx.CalculoEnvio();
        EXPECT_FLOAT_EQ(28.0, actual);
    }

}
