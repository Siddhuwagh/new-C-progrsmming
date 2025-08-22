#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three Sides : ");
    scanf("%d %d %d", &a, &b, &c);

    if((a == b +c) || (b == a + c) || (c == a + b)) {
        printf("Its a valid triangle.\n");
    }
    else
    {
        printf("Its not a  triangle.\n");
    }
}