#include <stdio.h>
void main()
{
    int operator, a, b;
    printf("Enter value a : ");
    scanf("%d", &a);

    printf("Enter value b : ");
    scanf("%d", &b);

    printf("Choose Option : ");
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    scanf("%d", &operator);
    switch (operator)
    {
    case 1:
        printf("addition %d", add);
        break;
    case 2:
        printf("subration %d", sub);
        break;
    case 3:
        printf("multiplication %d", mul);
        break;
    case 4:
        printf("divison %d", div);
        break;

    default:
        printf("Invailed Number ");
        break;
    }
}