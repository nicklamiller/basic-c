#pragma once

typedef struct Node {
  int data;
  struct Node* next;
} Node;

void print_node(Node* node);
void print_linked_list(Node* current);
Node* insert_head(Node* head, int value);
Node* get_value(Node* current, int idx);
Node* set_value(Node* current, int idx, int data);
void destroy_linked_list(Node* head);
