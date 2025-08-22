/*Write a program to check whether given number is divisible by 5 and 7? 
(with && operator and with nested if) */
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num %5 == 0 && num % 7 ==0)
    {
        printf("The number %d is divisible by both 5 and 7.\n", num);
    }
    else
    {
        printf("The number %d is not divisible by both 5 and 7.\n", num);
    }
}