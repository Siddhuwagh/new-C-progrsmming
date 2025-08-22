/* Accept radius of a circle and print the area and circumference of circle. (Hint: 
area = πr2, circumference = 2πr)  */
#include<stdio.h>
int main()
{
    int r,pi=3.14;
    float area,circum;
    printf("Enter the Radius Of a circle ::\n ");
    scanf("%d",&r);
    area = pi*(r*r);
    printf("\n  area Of Circle is : :%.2f",area);
    circum = 2 * (pi * r );
    printf("\n Circumference of a circle is : :%.2f",circum);
    return 0;
}