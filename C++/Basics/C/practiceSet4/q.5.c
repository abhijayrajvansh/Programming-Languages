#include <stdio.h>
int main(){
    
    //Q. Write a program to sum the first ten natural numbers using a while loop.

    //using while loop

    int i =1, sum=0;
    while(i<=10){
        sum +=i;
        i++;
        //printf("The sum of the natural no till 10  is %d: ", sum);
    }
    printf("the sum of the natural is : %d\n", sum);
    
    return 0;
}