#include <stdlib.h>

#include "linked_list.h"
#include "unity.h"

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

void test_get_set_value() {
  Node* first = malloc(sizeof(Node));
  Node* second = malloc(sizeof(Node));
  first->data = 1;
  first->next = second;
  second->data = 2;
  second->next = NULL;
  Node* zeroth = insert_head(first, 0);
  TEST_ASSERT_EQUAL_INT(0, get_value(zeroth, 0)->data);
  TEST_ASSERT_EQUAL_INT(1, get_value(zeroth, 1)->data);
  TEST_ASSERT_EQUAL_INT(2, get_value(zeroth, 2)->data);
  set_value(zeroth, 1, 0);
  set_value(zeroth, 1, 3214);
  set_value(zeroth, 2, 132);
  TEST_ASSERT_EQUAL_INT(0, get_value(zeroth, 0)->data);
  TEST_ASSERT_EQUAL_INT(3214, get_value(zeroth, 1)->data);
  TEST_ASSERT_EQUAL_INT(132, get_value(zeroth, 2)->data);
}

int main() {
  RUN_TEST(test_insert_head);
  RUN_TEST(test_get_set_value);
  return 0;
}
