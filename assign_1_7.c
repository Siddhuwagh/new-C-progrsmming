/* Accept two integers from the user and interchange them. Display the 
interchanged numbers. Using temporary variable Without using temporary 
variable 
a. Using + and – operator 
b. Using / and * operator */
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number :");
    scanf("%d",&a);
    printf("Enter the number :");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b; 
    printf("%d",a);
    return 0;

}