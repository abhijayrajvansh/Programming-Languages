#include <stdio.h>
int main () {
    
    // creating a program to find the grade for the following marks:

    // 100-90 A
    // 90-80  B
    // 80-70  C
    // 70-60  D
    // <60    F
    printf ("Enter your friend's marks\n");
    int marks;
    scanf("%d", &marks);

    if (marks <=60) {
        printf("F\n");
    }
    else if (marks >60 && marks <=70) {
        printf("D\n");
    }
    else if (marks >70 && marks <=80) {
        printf("C\n");
    }
    else if (marks >80 && marks <= 90) {
        printf("B\n");
    }
    else if (marks >90 && marks <=100){
        printf("A\n");
    }
    else if (marks> 100){
        printf("Enter a valid marks, maximum entry allowed is 100\n");
    }
    
    return 0;
}