#include <bits/stdc++.h>
using namespace std;

int main (){
	int n; cin >> n; int s = 0;
	int m = 2 * n;
	for (int i = 2; i <= m; i = i + 2){
		s += i;
	}
	cout << "The even numbers are : ";
	for (int i = 2; i <= m ; i = i + 2){
		cout << i << " ";
	}
	cout << endl;
	cout << "The Sum of even Natural Number upto 5 terms : " << s << endl;
	return 0;
}