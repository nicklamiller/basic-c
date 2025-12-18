#pragma once

typedef struct {
  int* head;
  int length;
} Array;

Array create_array(int length);
void destroy_array(Array* array);
void print_array(Array array);
void set_value(Array array, int index, int value);
int get_value(Array array, int index);
Array slice_array(Array array, int start, int end);
