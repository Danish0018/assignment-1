// •	Problem: Write a C program that takes two integer inputs from the user
//  and performs basic arithmetic operations (addition, subtraction, multiplication, division).
//  Display the results of each operation.
#include <stdio.h>
void main()
{
    int a = 10;
    int b = 5;

    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;

    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Division: %d\n", div);
}