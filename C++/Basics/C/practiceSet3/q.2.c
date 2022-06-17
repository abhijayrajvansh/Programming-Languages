#include <stdio.h>
int main (){
    
    /*Write a program to find out whether a student is pass or fail; 
    if it requires a total of 40% to pass. Assume 3 subjects and take 
    marks/percentage as an input from the user. */

    printf("Enter the percentage for all the 3 subjects\n");
    int sub1, sub2, sub3;

    scanf("%d", &sub1);
    scanf("%d", &sub2);
    scanf("%d", &sub3);
    
    int totalAveragePercentage = (sub1 + sub2 + sub3) / 3;

    if (totalAveragePercentage >= 40) {
        printf("You are pass !! mauj karo \n");
    }
    else {
        printf("You are fail !! padhai karo aur kabhi haar mat manna \n");

    }

    
    return 0;

}