#include <stdio.h>
int main (){
    
    // write a program to print integers till the output of the user

    int n;
    int i = 1;
    scanf("%d", &n);
    
    

    do{
        printf("%d\n", i); i++;
    }
    while (i<=n);
    
    return 0;
}