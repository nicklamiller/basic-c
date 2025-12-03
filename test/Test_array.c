#include "unity.h"
#include "array.h"

void setUp() {}

void tearDown() {}

void test_create_array() {
    int length1 = 5;
    Array array1 = create_array(length1);
    for (int i = 0; i < length1; i++) {
        TEST_ASSERT_EQUAL_INT(NULL, array1.head[i]);    
    }
    TEST_ASSERT_EQUAL_INT(length1, array1.length);
    int length2 = 1;
    Array array2 = create_array(length2);
    for (int i = 0; i < length2; i++) {
        TEST_ASSERT_EQUAL_INT(NULL, array2.head[i]);    
    }
    TEST_ASSERT_EQUAL_INT(length2, array2.length);
}

void test_set_value() {
    int length = 5;
    Array array = create_array(length);
    for (int i = 0; i < length; i++) {
        set_value(array, i, i*2);
    }
    for (int i = 0; i < length; i++) {
        TEST_ASSERT_EQUAL_INT(i*2, array.head[i]);
    }
}

void test_get_value() {
    int length = 5;
    Array array = create_array(length);
    for (int i = 0; i < length; i++) {
        set_value(array, i, i*2);
    }
    for (int i = 0; i < length; i++) {
        TEST_ASSERT_EQUAL_INT(i*2, get_value(array, i));
    }
}

void test_slice_array() {
    int length = 5;
    Array array = create_array(length);
    for (int i = 0; i < length; i++) {
        set_value(array, i, i*2);
    }

    Array first_slice = slice_array(array, 0, 3);
    TEST_ASSERT_EQUAL_INT(3, first_slice.length);
    for (int i = 0; i < first_slice.length; i++) {
        TEST_ASSERT_EQUAL_INT(i*2, first_slice.head[i]);
    }

    Array second_slice = slice_array(array, 2, 5);
    TEST_ASSERT_EQUAL_INT(3, second_slice.length);
    TEST_ASSERT_EQUAL_INT(4, second_slice.head[0]);
    TEST_ASSERT_EQUAL_INT(6, second_slice.head[1]);
    TEST_ASSERT_EQUAL_INT(8, second_slice.head[2]);

    Array third_slice = slice_array(array, 4, 5);
    TEST_ASSERT_EQUAL_INT(1, third_slice.length);
    TEST_ASSERT_EQUAL_INT(8, third_slice.head[0]);
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_create_array);
    RUN_TEST(test_set_value);
    RUN_TEST(test_get_value);
    RUN_TEST(test_slice_array);
    return UNITY_END();
}
