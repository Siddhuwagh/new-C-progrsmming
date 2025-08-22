/*5. Accept two numbers and print arithmetic and harmonic mean of the two 
numbers. (Hint: AM=(a+b)/2, HM = ab/(a+b)) */
#include<stdio.h>
int main()
{
    int a,b,AM,HM;
    printf("Enter the two numbers ::\n");
    scanf("%d%d",&a,&b);

    AM = (a+b)/2;
    HM = a*b/(a+b);
    printf(" arithmetic mean ::%d",AM);
    printf(" harmonic mean ::%d",HM);
}