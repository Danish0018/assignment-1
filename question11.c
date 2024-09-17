/*Problem: Write a C program that generates and prints the multiplication table of a given number using a for loop.
Example:*/
#include<stdio.h>
void main ()
{
    int n; 
    printf("Enter Table : ");
    scanf("%d",&n);

    for(int i = 1 ; i <= 10; i++){
        printf("%d x %d = %d\n", n, i ,n*i);
    }
    
    
}