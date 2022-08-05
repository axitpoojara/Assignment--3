/*18. Write a program which takes the month number as an input and display number of
days in that month*/
#include<stdio.h>
int main()
{
    int monthdays;
    printf( "enter any month number : ");
    scanf("%d", &monthdays);
    if(monthdays == 1 ||monthdays ==3 || monthdays ==5 || monthdays ==7 || monthdays ==8 || monthdays ==10 || monthdays ==12)
        printf(" number of days in this month is 31");
    else if(monthdays == 9 || monthdays == 11 || monthdays == 4 || monthdays == 6)
        printf(" number of days in this month is 30");
    else if(monthdays == 2)
        printf(" number of days in this month is 28/29");
    else
        printf(" enter valid number");
    return 0;
}