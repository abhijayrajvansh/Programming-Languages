#include <stdio.h>
int main (){
    
    //Q. Write a program to print the multiplication table of a given number n

    int n, table;
    printf("--------------\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("--------------\n");
    
    while(table <= 10){
        printf("%d x %d = %d\n", n, table, n*table); table++;
    }
    return 0;
}