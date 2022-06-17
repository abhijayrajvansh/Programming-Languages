#include <stdio.h>
int main (){
    
    //q. Write a program to check whether a given number is prime or not using loops.
    
    
    int n, prime = 1, i =2;
    printf("Enter a number :");
    scanf("%d", &n);

    for (i < n; i++;){
        if (n%i==0){
            prime = 0;
            break;
        }
    }
    if (prime == 0){
        printf("The given Number is NOT a prime number\n");
    }
    else{
        printf("The given number is a prime number\n");
    }

    return 0;
}