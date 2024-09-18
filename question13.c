
#include <stdio.h>
void main()
{
    int number, reverse;

    printf("Enter Value : ");
    scanf("%d", &number);
    printf("The reverse is : ");

    while (number > 0)
    {
        reverse = number % 10;
        printf("%d", reverse);
        number = number / 10;
    }
}