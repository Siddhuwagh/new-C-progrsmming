
/*Write a program, which accepts annual basic salary of an employee and
calculates and displays the Income tax as per the following rules
1. Basic: < 1,50,000 Tax = 0
2. 1,50,000 to 3,00,000 Tax = 20%
3. > 3,00,000 Tax = 30% */
#include <stdio.h>
int main()
{
    int bs, tax, net_salary;
    printf("Enter the basic salary: ");
    scanf("%d", &bs);
    if (bs < 150000)
    {
        tax = 0;
    }
    else if (bs >= 150000 && bs <= 300000)
    {
        tax = 20;
    }
    else if (bs > 300000)
    {
        tax = 30;
    }
    net_salary = bs - (bs * tax / 100);
    printf("The net salary after tax reduction is: %d\n", net_salary);
    printf("The tax percentage applied is: %d%%\n", tax);
    return 0;
}