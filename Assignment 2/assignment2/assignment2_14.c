#include <stdio.h>
int main() {
    int x,y;
    printf("Enter two Co-ordinates: ");
    scanf("%d %d", &x, &y);
    printf("You entered: (%d, %d)\n", x, y);
  /*  if( x > 0 && y > 0)
    {
        printf("The Co-ordinate x and y is lies in First Quadrant.\n");
    }
    else if(x > 0 && y < 0)
    {
        printf("The Co-ordinate x is lies in Fourth Quadrant.\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("The Co-ordinate x and y is lies in Third Quadrant.\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("The Co-ordinate x is lies in Second Quadrant.\n");
    }
    else{
        printf("The Co-ordinate lies on the axis.\n");
    }
*/

    //  using Conditional operator
    (x > 0 && y > 0) ? printf("The Co-ordinate x and y is lies in First Quadrant.\n") :
    (x > 0 && y < 0) ? printf("The Co-ordinate x is lies in Fourth Quadrant.\n") :
    (x < 0 && y < 0) ? printf("The Co-ordinate x and y is lies in Third Quadrant.\n") :
    (x < 0 && y > 0) ? printf("The Co-ordinate x is lies in Second Quadrant.\n") :
    printf("The Co-ordinate lies on the axis.\n"); 
}