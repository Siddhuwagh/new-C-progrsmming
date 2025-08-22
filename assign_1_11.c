/*1. Consider a room having one door and two windows both of the same size. 
Accept dimensions of the room, door and window. Print the area to be painted 
(interior walls) and area to be whitewashed (roof). */
#include<stdio.h>
int main()
{
    int rl,rh,rw,dl,dw,ww,wl,area,Da,Wa,Pa,roof;
    printf("Enter length height and width of a room :");
    scanf("%d%d%d",&rl,&rh,&rw);
    printf("enter the length and width  of door ");
    scanf("%d%d",&dl,&dw);
    printf("enter the length and width  of window ");
    scanf("%d%d",&wl,&ww);
    area=2 * (rl * rh + rw * rh);
    printf("\n Area of a room :\n%d",area);
    Da=dw*dl;
    printf("\n Area of a door :\n%d",Da);
    Wa=2*(wl*ww);
    printf("\n Area of a window : \n%d",Wa);
    Pa=area-Da-Wa;
    printf("\n Area of a painted wall :\n %d",Pa);
    roof=rl*rw;
    printf("\n Area to be roof \n %d sq.m",roof);
    return 0;
}