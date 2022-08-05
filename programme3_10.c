/*10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/
#include<stdio.h>
int main()
{
    int cp,sp;
    float profit,loss;
    printf("Enter cost price of product :");
    scanf("%d",&cp);
    printf("Enter selling price of the product :");
    scanf("%d",&sp);
    if(cp>sp)
        {   loss =((cp-sp)*100)/cp;
            printf("you made loss of %.2f %%",loss);
        }
    else if(sp>cp)
        {
            profit =((sp-cp)*100)/sp;
            printf(" you made profit of %.2f %%",profit);
        }
    else
        printf(" please enter two different value");
    return 0;
}