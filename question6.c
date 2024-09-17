/*Problem: Write a C program that takes a character as input and determines whether it is a vowel
or consonant using a switch-case statement. Assume the input is always a lowercase letter.*/
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter Value : ");
    scanf("%c", &ch);
    // printf("%d", ch);

    switch (ch)
    {
    case 'a':
        printf("%c is a vowel", ch);
        break;
    case 'e':
        printf("%c is a vowel", ch);
        break;
    case 'i':
        printf("%c is a vowel", ch);
        break;
    case 'o':
        printf("%c is a vowel", ch);
        break;
    case 'u':
        printf("%c is a vowel", ch);
        break;

    default:
        printf("%c is a consonent", ch);
        break;
    }
}