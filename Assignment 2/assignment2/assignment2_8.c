/* Accept a lowercase character from the user and check whether the character 
is a vowel or consonant. (Hint: a,e,i,o,u are vowels) */
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a lowercase character: ");
    scanf(" %c", &ch);
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    }   
    else{
        printf("%c is a consonant.\n", ch);
    }
}