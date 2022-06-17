#include <stdio.h>
int main (){
    
    // creating a program to test 3 cases !!

    printf("\n");
    printf("-------------------------------------\n");
    printf("This program will test your 3 cases :\n");
    printf("-------------------------------------\n");
    printf("\n");

    int num;
    scanf("%d", &num);

    if(num > 10) {
        printf("the give number is greater than 10\n");
    }
    else if(num < 10) {
        printf("the given number is less than 10\n");
    }
    else if(num == 10) {
        printf("the number is equal to 10\n");
    }


    return 0;

}