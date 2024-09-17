/*Problem: Write a C program to check if a given year is a leap year or not using an if-else statement.
 A leap year is divisible by 4, but not divisible by 100 unless also divisible by 400.*/
#include <stdio.h>
void main()
{
    int number;
    printf("Enter Year : ");
    scanf("%d", &number);

    if (number % 4 == 0 || number % 400 == 0 && number % 100 != 0)
    {
        printf("%d is a leap year", number);
    }
    else
    {
        printf("%d is not leap year", number);
    }
}