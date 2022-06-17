#include <bits/stdc++.h>
using namespace std;
#define FO(i, z, n) for(int (i) = (z); (i) < (n); (i)++)
#define RFO(i, z, n) for(int (i) = (z); (i) >= (n); (i)--)
#define nl "\n"

string DTB(int n){
    string s = "";// empty string...
    while(n > 0){
        int remainder = n % 2; // finding the remainder...
        s += to_string(remainder); // stroring remainder as string...
        n /= 2; // reducing integer..
    }
    reverse(s.begin(), s.end()); // finally reversing the string...
    return s;   // returning final string...
}

int main (){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    int n; cin >> n;
    string ans = DTB(n);
    cout << ans << nl;
    return 0;
}