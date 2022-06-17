#include <stdio.h>

int sub(int x, int y){
	if (x > y){
		return x - y;
	}
	else {
		return y - x;
	}	
}

int main (){

	// int a, b;
	// scanf("%d %d", &a, &b);
	// int ans = sub(a, b);
	// printf("%d", ans);


	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++){
			printf("%d", i);
		}
		printf("\n");
	}


	return 0;
}