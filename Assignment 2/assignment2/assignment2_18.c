/*A library charges a fine for every book returned late. Accept the number of 
days the member is late, compute and print the fine as follows:(less than five 
days Rs fine, for 6 to 10 days Rs. Fine and above 10 days Rs. fine ) */
#include <stdio.h>
int main() {
    int days, Fine,book,book_price,Total;
    printf("Enter the number of books borrowed: ");
    scanf("%d", &book);
    printf("Enter the price of each book: ");
    scanf("%d", &book_price);
    Fine = 0;
    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &days);

    Fine = (days < 5) ? 0 : (days >= 6 && days <= 10) ? 5 : (days > 10) ? 10 : 0;
    if(Fine == 0) {
        printf("No fine applicable.\n");
    }
    else if(Fine == 5) {
        printf("Fine for returning the book late is: Rs. 5\n");
    }
    else if(Fine == 10) {
        printf("Fine for returning the book late is: Rs. 10\n");
    }
    else {
        printf("Book returned on time \n");

    }
    Total = book + Fine;
    printf("Total fine for returning %d books late is: Rs. %d\n", book, Fine);
    printf("Total amount to be paid: Rs. %d\n", book * book_price + Fine);
    printf("Thank you for using our library!\n");
    return 0;
}