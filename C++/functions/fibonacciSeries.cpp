#include <bits/stdc++.h>
using namespace std;

// Function to prin fibonacci number till n

void fibonacci(int n){
    int a = 0, b = 1, c;
    cout << "0 1 ";
    for (int i = 1; i <=n-2; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}
int main (){
    int z; cin >> z;
    fibonacci(z);
    return 0;
}