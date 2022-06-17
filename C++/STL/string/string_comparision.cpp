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
    // string s; cin >> s;
    // cout << s << nl;
    
    // int res = s.find("xyz");
    // if( res == -1){ // here string::npos is also equal to -1
    //     cout << "not present" << nl;
    // }
    // else{
    //     cout << "present" << nl;
    // }
    string s; cin >> s;
    string s1; cin >> s1;
    if(s > s1){
        cout << "s is greater" << nl;
    }else if (s == s1){
        cout << "s is equal" << nl;
    }
    else{
        cout << "s is smaller" << nl;
    }
   

    return 0;
}