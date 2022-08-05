/*4. Write a program to check whether a given number is an even number or an odd
number without using % operator.*/
#include<stdio.h>
int main()
{
    int num;
    printf(" Enter any number :");
    scanf("%d", &num);
    if(num&1==1)
        printf(" given number is odd number");
    else 
        printf(" given number is even number");
    return 0;
}