#include <bits/stdc++.h>
using namespace std;

void printStaircase(int n){
    for (int i = n; i >=1; i--){
        for (int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}
int main (){
    int n; cin >> n;
    printStaircase(n);
    return 0;
}