/*Write a program to accept quantity and rate for three items, compute the 
total sales amount, Also compute and print the discount as follows: (amount > – 
20% discount, amount between to – 15% discount, amount between – to -- 8 % 
discount) */
#include <stdio.h>
int main() {
    int p1_id, p2_id,p3_id, p1_quantity, p2_quantity, p3_quantity;
    char p1_name[100], p2_name[100], p3_name[100];
    float price1, price2, price3, Amount, discount, final_total;

    printf("Enter details for Item 1:\n");
    printf("ID: ");
    scanf("%d", &p1_id);
    printf("Name: ");
    scanf("%s", p1_name);
    printf("Quantity: ");
    scanf("%d", &p1_quantity);
    printf("Price per unit: ");
    scanf("%f", &price1);

    printf("Enter details for Item 2:\n");
    printf("ID: ");
    scanf("%d", &p2_id);
    printf("Name: ");
    scanf("%s", p2_name);
    printf("Quantity: ");
    scanf("%d", &p2_quantity);
    printf("Price per unit: ");
    scanf("%f", &price2);

    printf("Enter details for Item 3:\n");
    printf("ID: ");
    scanf("%d", &p3_id);
    printf("Name: ");
    scanf("%s", p3_name);
    printf("Quantity: ");
    scanf("%d", &p3_quantity);
    printf("Price per unit: ");
    scanf("%f", &price3);
    
    Amount = (p1_quantity * price1) + (p2_quantity * price2) + (p3_quantity * price3);
    printf("Total Amount: %.2f\n", Amount);

    if(Amount > 1000) {
        discount = 20;
    }
    else if(Amount >= 500 && Amount <= 1000) {
        discount = 15;
    }
    else if(Amount >= 200 && Amount < 500) {    
        discount = 8;
    }
    else {
        discount = 0;
    }      
// Disc = (amount > 1000) ? 20 : (amount >=500 && amount <= 1000) ? 15 : (amount >= 200 && amount < 500) ? 8 : 0;
    final_total = Amount - (Amount * discount / 100);
    printf("Final Total after %.2f%% discount: %.2f\n", discount, final_total);
    printf("\n\n********* BILL OF PRODUCTS *********\n");
    printf("| Item | Qty | Price | Total|\n");
    printf("| %s   | %d  | %.2f  | %.2f |\n", p1_name, p1_quantity, price1, (p1_quantity * price1));
    printf("| %s   | %d  | %.2f  | %.2f |\n", p2_name, p2_quantity, price2, (p2_quantity * price2));
    printf("| %s   | %d  | %.2f  | %.2f |\n", p3_name, p3_quantity, price3, (p3_quantity * price3));
    printf("-----------------------------------------\n");
    printf("Total      :   %.2f\n", Amount);
    printf("Discount   :    %.2f\n", discount);
    printf("Total      :   %.2f\n", final_total);
    printf("*************************\n");

    return 0;
}