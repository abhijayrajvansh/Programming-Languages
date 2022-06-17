#include <stdio.h>
int main (){
    
    //Q. previous question with do while loop
    
    int i =1, sum =0; 
    
    do{
        sum+=i;
        i++;
    }
    while (i<=10);
    printf("the sum is : %d\n", sum);
    
    return 0;
}