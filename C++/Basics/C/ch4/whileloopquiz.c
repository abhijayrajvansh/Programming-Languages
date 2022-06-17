#include <stdio.h>
int main(){
    
    // write a program to print natural from 10 - 20 with initial case int as 0

    int i = 0;
    while(i <= 20){
        
        if(i >= 10){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}