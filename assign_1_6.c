/*6. Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and 
print surface area and volume. (Hint: surface area=2(lb + lh +bh), volume = lbh)*/
#include<stdio.h>
int main()
{
    int l,b,h,sa,v;
    printf("Enter the  length (l), breadth(b) and height(h) ");
    scanf("%d%d%d",&l,&b,&h);
    sa = 2*(l*b + l*h +b*h);
    v =(l*b*h);
    printf("Surface area is : %d ",sa);
    printf("volume is : %d ",v);
    return 0;

}