#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    
    for (int i = 0; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main (){
    int n; cin >> n;
    printPattern(n);
    return 0;
}