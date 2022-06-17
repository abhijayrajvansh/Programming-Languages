#include <stdio.h>
int main (){
    
    //write a program to print n natural numbers in reverse order using for loop

    int i;
    printf("Enter a positive integer: ");
    scanf("%d", &i);
    printf("\n");
    printf("The required output is :\n");
    //printf("%d\n", i);

    for (int a = i; a; a--){
        printf("%d\n", a);
    }
    
    return 0;
}