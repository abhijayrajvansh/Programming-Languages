#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){

    printf("\n----------------------------------\n");
    printf("This is a number guessing game !!!\n");
    printf("----------------------------------\n\n");
    
    int number, guess, attempt=1;
    srand (time(0));
    number = rand()%100+1; // 
    printf("\nRandom generated number is: %d\n\n", number);

    do{

        printf("Enter your guess: ");
        scanf("%d", &guess);
        if(guess>number ){
            printf("Lower number please !\n\n");
        }
        else if(guess<number){
            printf("Higer number please !\n\n");
        }
        else{
            printf("You have guessed it in %d attempt(s)\n\n", attempt);
        }
        attempt++;

    }
    while(guess!=number);

    printf("Thank You for playing this game (c) copyright Abhijay Rajvansh. \n\n");
    
     return 0;
}