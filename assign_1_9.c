/*10. Accept the x and y coordinates of two points and compute the distance between 
the two points. */
#include<stdio.h>
int main()
{
    int amt;
    printf("Enter a amt");
    scanf("%d",&amt);
    printf("total cash of amount is :");
    printf("\n 10 = %d ",amt/10);
    amt=amt%10;
    printf("\n 5 = %d ",amt/5);
    amt=amt%5;
     printf("\n 1 = %d ",amt/1);
    amt=amt%1;
    return 0;
}