#include <bits/stdc++.h>
using namespace std;
#define FO(i, z, n) for(int (i) = (z); (i) < (n); (i)++)
#define nl "\n"

void debug(){
    string s0 = "hello";
    cout << s0 << nl;
    cout << "size of s0 : " << s0.size() << nl;
    string s1 = "macbookair";
    cout << s1 << nl;
    string s2 = "abhijayrajvansh@" + s1;
    cout << s2 << nl;
    cout << "size of the string is : " << s2.size() << nl;
    cout << s2.substr(0, 15) << nl;
    cout << s2.find("raj") << nl;
    cout << s2[7] << nl;
}


int main (){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    debug();
    return 0;
}