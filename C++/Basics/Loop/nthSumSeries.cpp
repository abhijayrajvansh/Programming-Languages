#include <bits/stdc++.h>
using namespace std;

int fact(int n){
	int f = 1;
	for (int i = 1; i <= n; i++){
		f *= i;
	}
	return f;
}

int main (){
	
	int n; float x;
	cout << "Input the value of X: ";
	cin >> x;
	cout << "Input the number of terms: ";
	cin >> n;
	float m = 1;
	int g = 2 * (n - 1);
	for(int i = 2; i <= g; i += 2){
		// here the 5th term is not the actual value of n = 5, it's 8th term
		if(i % 4 != 0){
			m -= (float)pow(x, i) / fact(i);
		}
		else{
			m += (float)pow(x, i) / fact(i);
		}
	}
	cout << "The sum = " << m << endl;
	cout << "Number of terms = " << n << endl;
	cout << fixed << setprecision(6) << "Value of x = " << x << endl;

	return 0;
}
