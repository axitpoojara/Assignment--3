/*7. Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float rt1,rt2;
    printf(" Enter coefficient of x^2,x and constant term");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D<0)
        printf("Both roots are imaginary");
    if(D==0)
        {
            printf(" Both roots are equal");
            rt1=-b/(2.0*a);
            printf("Root is %.2f",rt1);
        }
    if(D>0)
        {
            printf("Roots are real and distinct");
            rt1=(-b+sqrt(D))/(2*a);
            rt2=(-b-sqrt(D))/(2*a);
            printf(" \n Roots are : %.2f,%.2f",rt1,rt2);
        }

    
}