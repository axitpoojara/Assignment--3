/*1. Write a program to check whether a given number is positive or non-positive.*/
#include<stdio.h>
int main()
{
    int num;
    printf(" Enter any number :");
    scanf("%d",&num);
    if (num>0)
     { printf(" Given Number is positive");}
    else
      {  printf(" Given Number is non-positive");}
    return 0;
}