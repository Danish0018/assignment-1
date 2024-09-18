/*Problem: Write a C program to generate the Fibonacci sequence up to n terms using a for loop.
The Fibonacci sequence starts with 0 and 1, and each subsequent term is the sum of the previous two terms.*/
#include <stdio.h>
void main()
{
    int number;
    int a = 0;
    int b = 1;
    int c;
    printf("Enter Number : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        printf(" %d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}