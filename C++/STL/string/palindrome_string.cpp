#include <bits/stdc++.h>
using namespace std;
#define FO(i, z, n) for(int (i) = (z); (i) < (n); (i)++)
#define nl "\n"

int main (){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    string s; cin >> s;
    int i = 0, j = s.size() - 1;
    while(i < j){
        if(s[i] != s[j]){
            cout << "not palindrome" << nl;
            return 0;
            // we can use return 0 here to end the programe !!
        }
        i++; j--;
    }
    // no need to write a special case for i or j ?!
    
    cout << "palindrome" << nl;
    return 0;
}