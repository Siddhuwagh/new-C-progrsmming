/*Write a program to find maximum of three numbers? (3-4 logics) and (with 
conditional operator). Modify and find minimum of three numbers. */
#include <stdio.h>
int main(){
    int a, b, c,minimum, maximum;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
/*
    if(a >= b && a >= c) {
        printf("%d is the maximum number.\n", a);
    }
    else if(b >= a && b >= c) {
        printf("%d is the maximum number.\n", b);
    }
    else {
        printf("%d is the maximum number.\n", c);
    }
    
*/
  //   Using conditional operator to find maximum
    maximum = (a >=b && a >= c) ? a : ( b >= a && b >= c) ? b : c;
    printf("Maximum using conditional operator: %d\n", maximum);
    
    // Using conditional operator to find minimum
    minimum = (a <= b && c <= a)? a : (b <= a && b <= c) ? b : c;
    printf("Minimum using conditional operator: %d\n", minimum);
}