#include <stdio.h>
#include <math.h>


void printMult(int n){
	int i, j = 15;
	for (i = 1; i <= n; i++){
		printf(" %d x %d = %d\n", j, i , j*i);
	}
}
int cubeof(int n){
	return pow(n, 3);
}
int main (){
	int n;printf("Enter the no: ");
	scanf("%d", &n);
	printf("\n");
	int cube = cubeof(n);
	printf("%d", cube);

}