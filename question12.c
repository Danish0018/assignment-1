/*Problem: Write a C program to find the sum of all even numbers between 1 and 100 using a for loop.*/
#include<stdio.h>
void main ()
{
int i, number;
printf("Enter Number :");
scanf("%d",&number);
int sum = 0;
for(int i = 1; i <= number; i++){
    if (i % 2 == 0)
        sum = sum + i ;
}
printf("Sum of even numbers from 1 to %d is %d ", number , sum );


}