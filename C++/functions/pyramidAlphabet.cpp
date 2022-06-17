#include <bits/stdc++.h>
using namespace std;

// ABCDE
// ABCD
// ABC
// AB
// A

void printPatternABCD(int n){
    
    for (int i = 1; i <= n; i++){
        int cnt_alphabet = n - i + 1 ;
        char alphabet = 'A';
        for(int j = 1; j <= cnt_alphabet; j++){
            cout << alphabet;
            alphabet += 1;
        }
        cout << endl;
    }
}
int main (){
    int z; cin >> z;
    printPatternABCD(z);
    return 0;
}