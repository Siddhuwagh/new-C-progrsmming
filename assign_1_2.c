/*2. Accept dimensions of a cylinder and print the surface area and volume. (Hint: 
surface area = 2 πr2+ 2πrh, volume = πr2h) */
#include<stdio.h>
int main()
{
    int vol,h,r,surface_area,volume;
    printf("Enter the Radius of a cylinder ::\n ");
    scanf("%d",&r);
    printf("Enter the height of a cylinder ::\n");
    scanf("%d",&h);
    surface_area =( 2 * (3.14 * (r * r) + 2 *(3.14*r*h)));
    volume =(3.14 * (r * r) * h);
    printf("\n Surface area of a cylinder is ::%d",surface_area);
    printf("\n Volume of a cylinder is ::%d",volume);
    return 0;

}