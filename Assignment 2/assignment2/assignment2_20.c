/*WAP to accept any value and its catagory
like : Digit , uppercase , lowercase, special character ;

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a anything :");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
        printf("Upper case character ::");
    else if (ch >= 97 && ch <= 133)
        printf("Lower case character ::");
    else if (ch >= 48 && ch <= 57)
        printf("Diigit ::");
    else
        printf("Special Symbol ::");

    printf("The Input is a :%c", ch);
    return 0;
}

********************simpler than above************************ :
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a anything :");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Upper case character ::");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lower case character ::");
    else if (ch >= '0' && ch <= '9')
        printf("Diigit ::");
    else
        printf("Special Symbol ::");

    printf("The Input is a :%c", ch);
    return 0;

}
  
 ********************simpler than above************************ :

 only use the header file #include<ctype.h>
*/
#include <stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a anything :");
    scanf("%c", &ch);

    if (isupper(ch))
        printf("Upper case character ::");
    else if (islower(ch))
        printf("Lower case character ::");
    else if(isdigit(ch))
        printf("Diigit ::");
    else
        printf("Special Symbol ::");

    printf("The Input is a :%c", ch);
    return 0;

}

