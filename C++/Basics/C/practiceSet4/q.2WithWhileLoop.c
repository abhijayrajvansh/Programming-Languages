#include <stdio.h>
int main (){
    
    //Q.Write a program to print multiplication table of 10 in reversed order
    
    int table = 10;
    while(table <=10){
        printf("10 x %d = %d\n",table, 10*table); table--;
        if(table == 0){
            break;
        }
    }
    
    return 0;
}