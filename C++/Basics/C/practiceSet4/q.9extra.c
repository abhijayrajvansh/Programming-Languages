#include <stdio.h>
int main (){
    
    //Repeating previous questin with do while loop
    
    int fact =1,i=1,n;
    scanf("%d", &n);
    
    do{
        fact*=i; i++;
    }
    while (i<=n);
    printf("Factorial of %d is %d\n", n, fact);
    
    return 0;
}
