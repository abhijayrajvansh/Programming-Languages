#include <stdio.h>
int main (){
    
    //Q.Write a program to print multiplication table of 10 in reversed order
    
    for(int table =10; table; table--){
        printf("10 x %d = %d\n", table, 10*table);
        
        /* here we do not required to break the loop code because at table = 0 it 
        becomes false automatically and then the condition isn't valid !!!
        
        if(table == 1){
            break;
        }
        
        */
    }
    
    return 0;
}