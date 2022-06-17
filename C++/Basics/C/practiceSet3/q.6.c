#include <stdio.h>
int main(){
    
    /* Write a program to find the greatest of three numbers entered by the user.*/

    printf("Enter 3 numbers\n");
    int num1, num2, num3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    if (num1 >= num2 && num1>num3){       
        
        // here >= is used because to satisfy the case if two entered no are equal or else it will not execute any code
        printf("%d\n", num1);        
    }
    else if (num2 >= num3 && num2 > num1) {
        printf("%d\n", num2);
    }
    else if (num3 >= num2 && num3 > num1) {
        printf("%d\n", num3);
    }
    
    return 0;

}