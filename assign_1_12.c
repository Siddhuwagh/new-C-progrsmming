/*12. Accept a character from the keyboard and display its previous and next character 
in order. Ex. If the character entered is ‘d’, display “The previous character is c”, 
“The next character is e”*/
#include<stdio.h>
int main(){
    char n;
    printf("Enter a character :\n");
    scanf("%c",&n);
    ++n;
    printf("\n The next character is : %c",n);
    --n;
    --n;
    printf("\n The previous character is :%c",n);
}