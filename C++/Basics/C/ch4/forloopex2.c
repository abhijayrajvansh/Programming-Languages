#include <stdio.h>
int main (){
    
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    for (a; a <= 20; a++){
        if (a >= 5){
            printf("%d\n", a);
        }
    }
    
    return 0;

}