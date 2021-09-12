#include <gtest/gtest.h>
#include "../src/fedEx.h"

namespace
{
    TEST(FedExTests, CalculoEnvio_Test)
    {
        FedEx fedEx{4.0, 500.0};
        float actual = fedEx.CalculoEnvio();

        EXPECT_FLOAT_EQ(20.0, actual);
    }
}
