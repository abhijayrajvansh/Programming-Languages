#include <stdio.h>
int main (){
    
int rows, cols;
int A [][3] = { 
    {3,5,6},
    {4,7,9},
    {1,4,6} };
rows= ( sizeof(A)/ sizeof(A[0]) );
cols= ( sizeof(A)/ sizeof( A[0][0]) )/rows;
if (rows != cols){
    printf("Matrix should a square matric\n");
}
else{
    printf("upper triangular matrix: \n");
    for (int i=0; i<rows; i++){
        
        for(int j=0; j<cols; j++){

           if(i>j){
               printf("*");
            }
           else{
               printf("%d", A[i][j]);
            }
            //printf("\n");   
        }
        printf("\n");
    }
}
    return 0;
}