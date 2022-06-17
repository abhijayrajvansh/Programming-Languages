#include <bits/stdc++.h>
using namespace std;

int main (){
	int n; cin >> n;
	cout << endl;
	int k = 1;
	int m = n;
	 for (int i = 1; i <= n; i++){
	 	for (int i = m; i > 1; i--){
			cout << " ";
 		}
	 	for (int j = 1; j <= i; j++){
	 		cout << k << " ";
	 		k++;	
	 	}
	 	m--;
	 	cout << endl;
	}
	return 0;
}