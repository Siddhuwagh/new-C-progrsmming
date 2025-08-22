/*Write a program to compare two numbers? (==,>,<)*/
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if( a == b)
    {
        printf("%d is equal to %d.\n", a, b);
    }
    else if(a > b)
    {
        printf("%d is greater than %d.\n", a, b);
    }
    else if (a < b)
    {
        printf("%d is less than %d.\n", a, b);
    }
}