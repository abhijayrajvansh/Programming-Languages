#include <stdio.h>
int main (){
    
    /*Write a program to determine whether a 
    character entered by the user is lowercase or not.*/

    printf("Enter your chracter: ");
    char c;
    scanf("%c", &c);

    //Ascii table in use
    
    int characterValue = c;
    //printf("%d\n", characterValue); can check character ascii value

    if (characterValue >=97 && characterValue <= 122){
        printf("You have entered a lowercase charachter\n");
    }
    else{
        printf("Your charachter is not lowercase \n");
    }

    return 0;

}