/*8. Write a program to check whether a given year is a leap year or not.*/
#include<stdio.h>
int main()
{
    int yr;
    printf(" Enter any year:");
    scanf("%d", &yr);
    if (yr%4==0)
        printf(" %d year is leap year",yr);
    else
        printf("%d year is not a leap year",yr);
        return 0;
}