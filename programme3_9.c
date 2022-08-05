/*9. Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf(" Enter 1st numbr:");
    scanf("%d", &num1);
    printf("nter 2ND number");
    scanf("%d",&num2);
    printf("Enter the 3rd number");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3 )
       printf(" %d is greater than %d and %d",num1,num2,num3);
    else if
        (num2>num1 && num2>num3)
         printf(" %d is greater than %d and %d",num2,num1,num3);
    else if
      (num3>num1 && num3>num2)
         printf(" %d is greater than %d and %d",num3,num1,num2);

        
    
    return 0;
}

        
    
 