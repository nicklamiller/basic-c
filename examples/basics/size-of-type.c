// C program to find the size of int, char,
// float and double data types

#include <stdio.h>

int main()
{
	printf("Size of short int is: %ld", sizeof(short int));
	printf("\nSize of int is: %ld", sizeof(int));
	printf("\nSize of char is: %ld", sizeof(char));
	printf("\nSize of signed char is: %ld", sizeof(signed char));
	printf("\nSize of float is: %ld", sizeof(float));
	printf("\nSize of double is: %ld\n", sizeof(double));

	return 0;
}
