/*•	Problem: Write a C program that converts temperature from Celsius to Fahrenheit and vice versa.
The program should prompt the user to choose the type of conversion, take the temperature input,
 and then output the converted value.*/
#include <stdio.h>
void main()
{
    int temp, n;
    float temperature;
    printf("Choose Conversion \n");
    printf("1 for Celsius to Fahrenheit\n");
    printf("2 for Fahrenheit to Celsius\n");
    scanf("%d", &n);
    printf("Enter temperature : ");
    scanf("%d", &temp);
    printf("Value Of Temp. %d\n", temp);

    if (n == 1)
    {
        temperature = ((temp * 9 / 5) + 32);
        printf(" Temperature in Fahrenheit : %f degree F", temperature);
    }
    else
    {
        temperature = ((temp - 32) * 5 / 9);
        printf(" Temperature in Celcius : %f degree C", temperature);
    }
}