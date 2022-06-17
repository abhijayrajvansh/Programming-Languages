#include <stdio.h>

void printOdd(int n){
	int m;
	m = 2 * n;
	int i, j;
	for (i = 1; i <= m; i = i + 2){
		printf("%d ", i);
	}
}
int main (){

	int n;
	printf("Enter the N terms you want to print odd: ");
	scanf("%d", &n);
	printf("\n");
	printOdd(n);
	return 0;
}