/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    float per;
    printf(" Enter marks of English :");
    scanf("%d",&s1);
    printf(" Enter marks of Maths :");
    scanf("%d",&s2);
    printf(" Enter marks of Science :");
    scanf("%d",&s3);
    printf(" Enter marks of Social studies :");
    scanf("%d",&s4);
    printf(" Enter marks of Hindi :");
    scanf("%d",&s5);
    per=((s1+s2+s3+s4+s5)/5);
    if(per>=33)
        printf(" your result : pass and your percentage is %.2f",per);
    else
        printf(" your result : fail and your percentage is %.2f",per);
    return 0;
}