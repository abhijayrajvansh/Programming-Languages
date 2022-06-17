#include <stdio.h>
int main (){
    
    /*Q.Write a program to calculate the sum of the 
    numbers occurring in the multiplication table of 8.
    (Consider 8x1 to 8x10)*/
    
    
    int sum = 0, i = 8;
    
    while (i <= 80) {
        sum += i;
        i += 8;
        
    }
    printf("The sum of the number for table of 8 is  : %d\n", sum);
    
    
    
    
    return 0;
}