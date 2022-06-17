#include <bits/stdc++.h>
using namespace std;
#define FO(i, z, n) for(int (i) = (z); (i) < (n); (i)++)
#define RFO(i, z, n) for(int (i) = (z); (i) >= (n); (i)--)
#define nl "\n"

void BTD(string s){
    int ans = 0, base = 1;
    RFO(i, s.size() - 1, 0){
        ans += ((int)s[i] - '0') * base;
        base *= 2;
    }
    cout << ans << nl;
}

int main (){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    string s;
    cin >> s;
    BTD(s);
    return 0;
}