/*15. Write a program to check whether a given number is positive, negative or zero.*/
#include<stdio.h>
int main()
{
    int num;
    printf(" Enter any number :");
    scanf("%d",&num);
    if(num>0)
        printf(" Given number is positive");
    else if (num<0)
        printf(" Given number is negative");
    else    
        printf(" Given number is zero");
    return 0;
}