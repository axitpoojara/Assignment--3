/*3. Write a program to check whether a given number is an even number or an odd
number.*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    if(num % 2 ==1)
        printf(" Given number is odd number");
    else
        printf("Given number is even number");
    return 0;
    
}