/*	Problem: Write a C program that calculates the factorial of a given number using a for loop. Factorial of a number n is the product of all positive integers less than or equal to n (n!).
    Example: */
#include <stdio.h>
void main()
{
    int fact;
    printf("Enter Number : ");
    scanf("%d", &fact);

    int factorial = 1;

    for (int i = 1; i <= fact; i++)
        factorial = factorial * i;

    printf("factorial = %d", factorial);
}