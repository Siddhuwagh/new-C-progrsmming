/*. Accept the cost price and selling price from the keyboard. Find out if the 
seller has made a profit or loss and display how much profit or loss has been 
made?*/
#include <stdio.h>
int main() {
    float costPrice, sellingPrice, profitOrLoss;
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);
    profitOrLoss = sellingPrice  - costPrice;
    if(profitOrLoss > 0) 
        printf("Profit: %.2f\n", profitOrLoss);
    else if(profitOrLoss < 0)
        printf("Loss: %.2f\n", -profitOrLoss);
        else
        printf("No profit, no loss.\n");
}