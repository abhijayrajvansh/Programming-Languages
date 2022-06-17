#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    int a = 1, b = 2;
    if (n == 1 || n == 2){
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main (){
    int n; cin >> n;
    
    for (int i = 1; i <= n; i++){
    	cout << fibonacci(i) << " ";    
    }
    return 0;
}