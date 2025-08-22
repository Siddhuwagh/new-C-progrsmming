/*Write a program to check whether given number is divisible by 5 or 7? (with || 
operator and with else if) */
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 5 == 0 || num % 7 == 0)
    {
        printf("Theh number is divisible by 5 or 7:%d \n",num);
    }    
    else if(num % 5 != 0 && num % 7 != 0)
    {
        printf("The number %d is not divisible by 5 or 7.\n", num);
    }
    else
    {
        printf("Invalid input.\n");
    }

}