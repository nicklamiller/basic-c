#include "unity.h"
#include "array.h"

void setUp() {}

void tearDown() {}

void test_create_array() {
    int length1 = 5;
    Array array1 = create_array(length1);
    for (int i = 0; i < length1; i++) {
        TEST_ASSERT_EQUAL_INT(array1.head[i], NULL);    
    }
    TEST_ASSERT_EQUAL_INT(array1.length, length1);
    int length2 = 1;
    Array array2 = create_array(length2);
    for (int i = 0; i < length2; i++) {
        TEST_ASSERT_EQUAL_INT(array2.head[i], NULL);    
    }
    TEST_ASSERT_EQUAL_INT(array2.length, length2);
}

void test_set_value() {
    int length = 5;
    Array array = create_array(length);
    for (int i = 0; i < length; i++) {
        set_value(array, i, i*2);
    }
    for (int i = 0; i < length; i++) {
        TEST_ASSERT_EQUAL_INT(array.head[i], i*2);
    }
}

void test_get_value() {
    int length = 5;
    Array array = create_array(length);
    for (int i = 0; i < length; i++) {
        set_value(array, i, i*2);
    }
    for (int i = 0; i < length; i++) {
        TEST_ASSERT_EQUAL_INT(get_value(array, i), i*2);
    }
}

void test_slice_array() {
    int length = 5;
    Array array = create_array(length);
    for (int i = 0; i < length; i++) {
        set_value(array, i, i*2);
    }

    Array first_slice = slice_array(array, 0, 3);
    TEST_ASSERT_EQUAL_INT(first_slice.length, 3);
    for (int i = 0; i < first_slice.length; i++) {
        TEST_ASSERT_EQUAL_INT(first_slice.head[i], i*2);
    }

    Array second_slice = slice_array(array, 2, 5);
    TEST_ASSERT_EQUAL_INT(second_slice.length, 3);
    TEST_ASSERT_EQUAL_INT(second_slice.head[0], 4);
    TEST_ASSERT_EQUAL_INT(second_slice.head[1], 6);
    TEST_ASSERT_EQUAL_INT(second_slice.head[2], 8);

    Array third_slice = slice_array(array, 4, 5);
    TEST_ASSERT_EQUAL_INT(third_slice.length, 1);
    TEST_ASSERT_EQUAL_INT(third_slice.head[0], 8);
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_create_array);
    RUN_TEST(test_set_value);
    RUN_TEST(test_get_value);
    RUN_TEST(test_slice_array);
    return UNITY_END();
}
