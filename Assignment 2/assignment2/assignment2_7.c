/* Write a program to accept three numbers and check whether the first is 
between the other two numbers. Ex: Input 20 10 30. Output: 20 is between 10 
and 30 */
#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);  
    if((a > b && a < c ))
    {
        printf(" A is between B and C.\n"); 
        printf("%d is between %d and %d.\n", a, b, c);
    }
    else if(b > a && b < c)
    {
        printf(" B is between A and C.\n");
        printf("%d is between %d and %d.\n", b, a, c);
    }

    else if(c > a && c < b)
    {
        printf(" C is between A and B.\n");
        printf("%d is between %d and %d.\n", c, a, b);
    }
    else
    {
        printf("All values are either equal or not between each other.\n");
    }
}