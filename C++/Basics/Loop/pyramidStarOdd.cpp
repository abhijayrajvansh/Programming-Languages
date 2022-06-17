#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >> n;
    int m = n;
    for (int i = 1; i <= n; i += 2){
        for(int s = m; s > 1; s--){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
        m -= 2;
    }
    return 0;
}


