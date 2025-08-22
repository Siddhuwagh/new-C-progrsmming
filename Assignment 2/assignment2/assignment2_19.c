#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);

    (ch >= 65 && ch <= 90) ? printf("Upper case character ::") : (ch >= 97 && ch <= 122) ? printf("Lower case character ::") : printf("Not a valid character");
    if(isupper(ch)){
        printf("lower case character :: %c\n", tolower(ch));
    }
    else if(islower(ch)){
        printf("Upper case character :: %c\n", toupper(ch));
    }

    return 0;
}