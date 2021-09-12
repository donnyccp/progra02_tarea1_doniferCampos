#include <gtest/gtest.h>
#include "../src/fedEx.h"


namespace{
    TEST(FedExTests, CalculoEnvio_Test){
        FedEx FedEx {4.0, 500.0};
        float actual = FedEx.CalculoEnvio();
        
        EXPECT_FLOAT_EQ(20.0, actual);

    }
}
