/*16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
int main()
{
    char any;
    printf(" Enter anything like alphabet or digit or special character:");
    scanf("%c",&any);
    /*ASCII Character
        0 = 48, 9 = 57
        A = 65, Z = 90
        a = 97, z = 122 */
    if( any>47 && any<58)
        printf(" %c  is a digit",any);
    else if (any>64 && any<91)
        printf(" %c is an uppercase alphabet",any);
     else if (any>96 && any<123)
        printf(" %c is an lowercase alphabet",any);
    else
        printf(" %c is a special character",any);
    return 0;
}