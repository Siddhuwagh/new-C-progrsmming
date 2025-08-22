/*10. Accept the x and y coordinates of two points and compute the distance between 
the two points. */
#include<stdio.h>
int main(){
    int x,y,dis;
    printf("Enter the X co-ordinate :");
    scanf("%d",&x);
    printf("Enter the X co-ordinate :");
    scanf("%d",&y);
    dis = x-y;
    dis>=0;
    printf("Distance from X to Y is : %d",dis);
    return 0;

    
}