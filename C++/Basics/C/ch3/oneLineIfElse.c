#include <stdio.h>
int main(){
    
    // Using one line if else statement

    printf("Enter a number!!\n");
    int num;
    scanf("%d", &num);
    //Syntax: (condition) ? expression-if-true : expression-if-false;
    (num > 5 && num < 10) ? printf("Your number is greater than 5 but less than 10\n") : printf("Your number doesn't matter yaar!!\n");

    return 0;
}