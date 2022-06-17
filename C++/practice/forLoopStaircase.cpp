#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int n;
    cin >> n;
    cout << "Printing Staircase using loops: " << endl;
    for (int i = 0; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << "\n";
    }
    cout << endl;
    return 0;
}