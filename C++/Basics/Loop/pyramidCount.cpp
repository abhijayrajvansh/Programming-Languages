#include <iostream>
using namespace std;

int main (){
	
	int k = 1;int n; cin >> n;
	cout << endl; int m = n;
	for (int i = 1; i <= n; i++){
		for (int p = m; p > 1; p--){
			cout << " ";
		}
		for (int j = 1; j <= i; j++){
			cout << k << " ";
		}
		cout << endl;
		k++;
		m--;
	}
	return 0;
}