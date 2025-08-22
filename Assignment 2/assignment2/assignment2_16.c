#include <stdio.h>
int main() {
    int marks,total_marks,avg,sub1,sub2,sub3,class;
    marks < 100;
    total_marks < 300; 


    printf("Enter marks for subject 1: ");
    scanf("%d", &sub1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &sub2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &sub3);
    total_marks = sub1 + sub2 + sub3;
    avg = total_marks / 3;
    printf("Total Marks: %d\n", total_marks);
    printf("Average Marks: %d\n", avg);


    class = ( avg < 35) ? printf("You are failed in the exam.\n") : (avg >= 35 && avg < 60) ? printf("You have 3rd class in exam\n") : (avg >61 && avg < 80)? printf("You have 2nd class in exam\n") : printf("You have 1st class in exam\n");
    return 0;
}
 
    // Conditional operator to check if marks are valid
    