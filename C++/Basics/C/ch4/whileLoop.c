#include <stdio.h>
int main (){
    
    
    printf("This program will print integers to 10, enter a starting point: ");
    
    int a;
    scanf("%d", &a);
    printf("The required output is :\n");


    while (a <= 10){
        printf("%d\n", a);
        a++;
    }

    //also creating a infinite while loop

    // while (a > 10){
    //     printf("%d\n", a); a++;
    // }
    
    return 0;
}