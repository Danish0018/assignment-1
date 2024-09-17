/*Problem: Write a C program that takes an integer input from the user and checks
 if the number is even or odd using an if-else statement. Print an appropriate message.*/
#include <stdio.h>
void main()
{
    int n;
    printf("Enter__Number : ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is an even number ", n);
    }
    else
    {
        printf("%d is an odd number ", n);
    }
}