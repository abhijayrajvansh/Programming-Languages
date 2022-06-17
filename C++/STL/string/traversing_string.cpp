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
    string s;
    cin >> s;
    // normal way of trversing in string:-

    FO(i, 0, s.size()){
        cout << s[i];   
    }
    cout << nl;
    //another way for traversing loop in a string:-
    for(char x: s){
        cout << x;
    }
    cout << nl;
    //another way for traversing in string:-
    for(auto it = s.begin(); it != s.end(); it++){
        cout << (*it);
    }
    cout << nl << nl << "bruh" << nl;
    return 0;
}