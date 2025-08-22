/*13. Accept the time as hour, minute and seconds and check whether the time is 
valid. (Hint:0<=hour<24, 0<=minute <60, 0<=second <60) (3 logics) */
#include <stdio.h>
int main() {
    int h,m,s,Time;
    printf("Enter time in HH MM SS format: ");
    scanf("%d %d %d", &h, &m, &s);
     if(h<24 && m<60 && s<60){
        printf("Time is %d:%d:%d\n", h, m, s);
    } else {
        printf("Invalid time entered.\n");
    }
    return 0;

    //Conditional opertaor;
    Time = ( h < 24 && m < 60 && s < 60) ? printf("Time is %d:%d:%d\n", h, m, s) : printf("Invalid time entered.\n");
    return 0;
}