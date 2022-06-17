#include <stdio.h>
int main (){
    
    /*Do-while loop
    The syntax of do-while loop looks like this:
    do 
    
    {
    //code;
    //code;
    } while(condition)
    Do-while loop works very similer to while loop
    While -> checks the condition & then executes the code
    Do-while -> executes the code & then checks the condition
    **do-while loop = while loop which executes at least once*/
    
    printf("Enter a numer between 0-10\n");
    float num;
    scanf("%f", &num);

    do {
        printf("%0.1f\n", num);
        num++;
    }
    while (num <= 10);
    
    return 0;
}