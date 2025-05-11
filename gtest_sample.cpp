#include <gtest/gtest.h>
#include "sample.h"

TEST( test_add, case_1_plus_2 ){
    EXPECT_EQ( 3, add( 1, 2 ) );
}