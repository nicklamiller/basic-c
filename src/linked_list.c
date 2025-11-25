/*
A linked list is a list of memory chunks, where each chunk contains its own data, as well as a pointer (i.e. a link) to the next
chunk in the linked list. It's worth noting that the pointer to the next node would exist unless there is no next node and we've
reached the end of our linked list, in which case the pointer would be NULL. To implement a linked list, we'll need:

1. The piece of data to store in a given node
2. The pointer to the next node
*/
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"



void print_node(Node* node) {
    printf("Value: %d\n", node->data);
    printf("Next: %p\n", node->next);
}


void print_linked_list(Node* current) {
    while (current != NULL) {
        print_node(current);
        current = current->next;
    }
}


Node* insert_head(Node* head, int value) {
    Node* new = malloc(sizeof(Node));
    new->data = value;
    new->next = head;
    return new;
}


Node* get_value(Node* current, int idx) {
    int iter = 0;
    while (iter <= idx) {
        if (current == NULL) {
            printf("Linked List does not contain value at specified index: %d", idx);
            return NULL;
        }
        if (iter == idx) {
            print_node(current);
            return current;
        }
        iter += 1;
        current = current->next;
    }
    return NULL;
}


Node* set_value(Node* current, int idx, int data) {
    Node* node = get_value(current, idx);
    node->data = data;
    return node;
}


void destroy_linked_list(Node* head) {
    Node* current = head;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }
}


// int main() {
//     printf("------------------------Test printing------------------------\n");
//     Node* first = malloc(sizeof(Node));
//     Node* second = malloc(sizeof(Node));
//     first->data = 1;
//     first->next = second;
//     second->data = 2;
//     second->next = NULL;
//     print_linked_list(first);

//     printf("------------------------Test inserting @ head------------------------\n");
//     Node* zeroth = insert_head(first, 0);
//     print_linked_list(zeroth);

//     printf("------------------------Test getting value------------------------\n");
//     get_value(zeroth, 1);

//     printf("------------------------Test setting value------------------------\n");
//     set_value(zeroth, 1, 100);
//     get_value(zeroth, 1);

//     printf("------------------------Test destroying linked list------------------------\n");
//     destroy_linked_list(zeroth);
//     return 0;
// };
