#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}
int main (){

	int a = 10, b = 20;
	swap(a, b);
	printf("%d\n%d", a, b);
	return 0;
}