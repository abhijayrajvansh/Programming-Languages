#include <bits/stdc++.h>
using namespace std;
#define FO(i, z, n) for(int (i) = (z); (i) < (n); (i)++)
#define RFO(i, z, n) for(int (i) = (z); (i) >= (n); (i)--)
#define nl "\n"

void printindex(string s, string pat){
    int index = s.find(pat);
    
    while(index != string::npos){
        cout << "Pattern found at " << index << nl;
        index  = s.find(pat, index + 1);
    }
}
int main (){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    string s;
    cin >> s;
    string pat; cin >> pat;
    printindex(s, pat);
    return 0;
}