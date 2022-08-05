/*12. Write a program to check whether a given alphabet is in uppercase or lowercase.*/
#include<stdio.h>
int main()
{
    char alphabet;
    printf(" enter any  alphabet :");
    scanf("%c",&alphabet);
    // ASCII character of A = 65, Z = 90, a = 97, z = 122
    if(alphabet>64 && alphabet<91)
        {printf("%c is in uppercase",alphabet);}
    else if (alphabet>96 && alphabet<123)
        {printf("%c is in lower case",alphabet);}
    else 
        {printf(" enter a valid alphabet");}
    return 0;
}