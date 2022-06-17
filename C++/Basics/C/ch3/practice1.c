#include <stdio.h>
int main (){
    
    printf("\n");
    printf("------------------------------------------------------\n");
    printf("This program  will check whether you can drive or not\n");
    printf("------------------------------------------------------\n");
    printf("\n");

    printf("Enter your age!!\n");
    int age;
    scanf("%d", &age);

    if(age>=18 && age <=90){
        printf("bsdk bete, arey tum to heavy driver ho bhai\n\n");
        //printf("\n");
    }
    else{
        printf("Sorry!! you can't drive\n");
    }
    
    return 0;

}