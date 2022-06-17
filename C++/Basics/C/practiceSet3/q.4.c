#include <stdio.h>
int main (){
    
    /*Write a program to find whether a year 
    entered by the user is a leap year or not. 
    Take the year as input from the user.*/

    printf("Enter the year to check whether it is leap year or not\n");

    int year;
    scanf("%d", &year);

    int yearValue = year % 4;
    if (yearValue == 0){
        printf("This is a leap year\n");
    }
    else {
        printf("This is not a leap year\n");   
    }
    
    return 0;
}