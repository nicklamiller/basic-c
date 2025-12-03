#include <stdlib.h>
#include "unity.h"
#include "linked_list.h"

void setUp() {};

void tearDown() {};

int count_linked_list_size(Node* current) {
    int size = 1;
    while (current != NULL) {
        size += 1;
        current = current->next;
    }
    return size;
}

void test_insert_head() {
    Node* first = malloc(sizeof(Node));
    Node* second = malloc(sizeof(Node));
    int og_count = count_linked_list_size(first);
    TEST_ASSERT_EQUAL_INT(2, og_count);
    Node* zeroth = insert_head(first, 0);
    int updated_count = count_linked_list_size(zeroth);
    TEST_ASSERT_EQUAL_INT(3, updated_count);
}

int main() {
    RUN_TEST(test_insert_head);
    return 0;
}
