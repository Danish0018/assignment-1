/*Count the Number of Digits in an Integer
Problem: Write a C program that counts the number of digits in a given integer using a for loop.*/
#include <stdio.h>
void main()
{
    int number, count;
    printf("Enter Digits  : ");
    scanf("%d", &number);

    while (number > 0)
    {
        number = number / 10;
        count++;
    }
    printf("The number of digit is %d", count);
}