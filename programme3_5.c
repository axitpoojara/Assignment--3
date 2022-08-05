/*5. Write a program to check whether a given number is a three-digit number or not.*/
#include<stdio.h>
int main()
{
    int num;
    printf(" Enter any  number:");
    scanf("%d", &num);
    if (num>99 && num<1000)
        printf(" yes given numer is three digit number");
    else
        printf(" no given number is not a three digit number");
    return 0;

}