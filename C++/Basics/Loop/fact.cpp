#include <iostream>
using namespace std;

void fact(int n){
	int f = 1;
	for (int i = 1; i <= n; i++){
		f *= i;
	}
	cout << f;
}
int main (){

	int n;
	cin >> n;
	fact(n);
	return 0;
}

#include <iostream>
using namespace std;

int fact(int n){
	int f = 1;
	for (int i = 1; i <= n; i++){
		f *= i;
	}
	return f;
}
int main (){

	int n;
	cin >> n;
	int ans = fact(n);
	cout << ans;
	return 0;
}