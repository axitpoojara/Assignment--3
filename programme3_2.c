/*2. Write a program to check whether a given number is divisible by 5 or not*/
#include<stdio.h>
int main()
{
    int num;
    printf(" Enter any number");
    scanf("%d",&num);
    if( num % 5==0)
        printf("given number is divisible by 5");
    else
        printf("given number is not divisible by 5");
    return 0;

}