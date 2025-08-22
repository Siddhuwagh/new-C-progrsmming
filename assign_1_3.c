/*3. Accept temperatures in Fahrenheit(F) and print it in Celsius(C) and Kelvin (K). 
(Hint: C=5/9(F- 32), K = C + 273.15) */
#include<stdio.h>
int main()
{
    int f,c,k;
    printf("\n Enter the temprature in Fahrenheit ::\n");
    scanf("%d",&f);

    c = (5/9*(f- 32));
    printf("\n Temprature in celcius ::%d",&c);

    k = (c + 273.15);
    printf("\n Temprature in kelvin ::%d",&k);

    return 0;
    

}