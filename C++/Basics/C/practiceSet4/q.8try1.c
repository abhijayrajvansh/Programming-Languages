#include <stdio.h>
int main ()
{
    
    //// Write a program to calculate the factorial of a given number using for loop.
    
    int n, fact =1;
    printf("Enter a num : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        fact*=i;
    }
    printf("factorial of %d is %d\n", n, fact);

    
    return 0;
}