#include <stdio.h>
int main (){
    
    // Creating a program to give ratings on the basis of choices

    printf("Enter your ratings, it should be from 1-5 only !!\n");

    int rating;
    scanf("%d", &rating);
    
    switch(rating){
        case 1:
        printf("You have given ratings 1\n");
        break;

        case 2:
        printf("You have given ratings 2\n");
        break;

        case 3: 
        printf("You have given ratings 3\n");
        break;

        case 4:
        printf("Ypu have given ratings 4\n");
        break;

        case 5:
        printf("You have given ratings 5\n");
        break;

        default:
        printf("Your rating is invalid !!\n");
        break;

    }
    
    
    return 0;

}