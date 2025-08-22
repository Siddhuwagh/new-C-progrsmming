//2. Write a program to check whether given number is positive or negative?
#include <stdio.h>
int main() {
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);
    if(num > 0){
        printf("The number is positive.\n");
    }
    else
    {
        printf("number is negative :%d\n", num);
    }
}