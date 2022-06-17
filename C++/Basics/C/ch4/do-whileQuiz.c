#include <stdio.h>
int main(){
    
    // write a prgram to print first n natural numbers using do-while loop
    
    /*int num;
    scanf("%d",&num);

    do{
        printf("%d\n", num); num--;

    }
    while (num >= 1); */

    //but when using this code the output is in reversed order
    printf("This programm will print natural number, enter a number: ");

    int i;
    scanf("%d", &i);
    int one = i - (i-1); // 1

    do {
        printf("%d\n", one); one++;
    }
    while (one <= i);
    
    return 0;

}