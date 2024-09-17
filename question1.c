// Problem: Write a C program that declares variables of different data types:
// int, float, char, and double. Initialize them with some values and then display both the
// values and the memory size (in bytes) occupied by each data type using the sizeof() operator.
#include <stdio.h>

void main()
{
    int a = 10;
    float b = 2.3;
    char c = 'A';
    double d = 55.55;

    printf("Value of int a: %d , Size: %d bytes\n", a, sizeof(a));
    printf("Value of float b: %f , Size: %d bytes\n", b,sizeof(b));
    printf("Value of char c: %c, Size: %d bytes\n", c, sizeof(c));
    printf("Value of double d: %lf , Size: %d bytes\n",d,sizeof(d));
}