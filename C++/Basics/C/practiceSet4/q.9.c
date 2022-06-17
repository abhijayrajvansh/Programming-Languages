#include <stdio.h>
int main (){
    
    //Q. Repeat 8 using a while loop.

    int i =1, fact =1, n;
    scanf("%d", &n);

    while(i<=n){
        fact*=i; i++;
    }
    printf("factorial of %d is %d\n", n, fact);
    
    return 0;
}