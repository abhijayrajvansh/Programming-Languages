#include <bits/stdc++.h>
using namespace std;

int sumOf(int n){
    if (n == 1){
        return 1;
    }
    else {
        return n + sumOf(n - 1);
    }
}
int main (){
    int n; cin >> n;
    cout << sumOf(n);
    return 0;
}