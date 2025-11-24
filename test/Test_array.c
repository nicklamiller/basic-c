#include "unity.h"

void setUp() {}

void tearDown() {}

void test_basic_pass() {
    int a = 1;
    TEST_ASSERT( a == 1 );
}


void test_basic_fail() {
    int a = 1;
    TEST_ASSERT( a == 2 );
}


int main() {
    UNITY_BEGIN();
    RUN_TEST(test_basic_pass);
    RUN_TEST(test_basic_fail);
    return UNITY_END();
}
