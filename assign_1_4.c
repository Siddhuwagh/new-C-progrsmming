/*4. Accept initial velocity (u), acceleration (a) and time (t). Print the final velocity 
(v) and the distance (s) travelled. (Hint: v = u + at, s = u + at2)*/
#include<stdio.h>
int main()
{
    int u,a,t,v,s;
    printf("Enter  velocity  accelartion and time :: \n");
    scanf("%d\n%d\n%d",&u,&a,&t);

    v = (u + a*t);
    printf("\n Final velocity is ::%d",v);

     s = u + (a*t)*2;
    printf(" \n distance travelled is ::%d",s);
        
    return 0;
}
