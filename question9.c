/*•	Problem: Write a C program that uses a for loop to print the first 10 natural numbers (1 to 10).*/
#include <stdio.h>
void main()
{
    int number;
    printf("Enter Value : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        printf("%d ", i);
    }
}