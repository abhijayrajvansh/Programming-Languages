#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main (){
    
    ll n, fact = 1;

    cin >> n;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    cout << fact;
    return 0;
}



/* Factorial   5
 i = 1 x 2 x 3 x 4 x 5 = 120 */