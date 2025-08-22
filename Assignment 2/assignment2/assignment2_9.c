/* Accept any year as input through the keyboard. Write a program to check 
whether the year isa leap year or not. (Hint leap year is divisible by 4 and not by 
100 or divisible by 400) */
#include <stdio.h>
int main(){
    int yr;
    printf("Enter a year: ");
    scanf("%d", &yr);
    if( yr % 4 == 0 || yr %400 == 0)
    {
        printf("%d is a leap year.\n", yr);
    }
    else
    {
        printf("%d is not a leap year.\n", yr);
    }
}