/*•	Problem: Write a C program that takes three integer inputs and finds
the largest among them using nested if-else statements.*/
#include <stdio.h>
void main()
{
    int a, b, c;

    printf("Enter First Number :\n");
    scanf("%d", &a);
    printf("Enter Second Number :\n");
    scanf("%d", &b);
    printf("Enter Third Number :\n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("The largest number is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("The largest number is %d", b);
    }
    else
    {
        printf("The largest number is %d", c);
    }
}