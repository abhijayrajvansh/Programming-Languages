#include <stdio.h>
int main (){
    
    // The Break statement in C

    int i = 0;
    do{
        printf("%d\n", i);
        if(i==5){
            break;
        }
        i++;

    }
    while(i<=10);

    
    return 0;

}