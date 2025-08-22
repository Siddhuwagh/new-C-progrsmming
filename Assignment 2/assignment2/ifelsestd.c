#include<stdio.h>
int main(){
    char name[50];
    int marks;
    printf("Enter student name: ");
    gets(name);
    gets(name);
    printf("Enter student marks: ");
    scanf("%d", &marks);

    if(marks <= 35 && marks >= 0)
    {
        printf("Student %c has failed with marks %d.\n", name, marks);
    }
    else if(marks <= 60 && marks >=36)
    {
        printf("Student %c has passed with marks %d.\n", name, marks);
    }
    else if(marks <= 90 && marks >=61)
    {
        printf("Student %c is in second class of marks %d.\n", name, marks);
    }

    else if(marks <= 100 && marks >=91)
    {
        printf("Student %c is passed his exam with  A+ grade :%d \n",name ,marks );
    }
    else{
        printf("marks are n0t valid \n");
    }
}