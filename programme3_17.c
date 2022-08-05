/*17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/
#include<stdio.h>
int main()
{
    float side1,side2,side3;
    printf(" Enter length of three sides of triangle : ");
    scanf("%f%f%f",&side1,&side2,&side3);
    if(side1 +side2 > side3 &&  side1 + side3 > side2 && side2 + side3 > side1 )
        printf(" triangle is valid");
    else 
        printf(" triangle is not valid");
    return 0;
}