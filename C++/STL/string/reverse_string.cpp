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
    
    // two pointer approach;
    
    int i = 0, j = s.size() - 1;
    while(i < j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++; j--;
    }
    cout << s;
    cout << nl;

    //one point approch however requires an empty string of real string given:-

    string r;
    int l = s.size() - 1;
    while(l >= 0){
        r += s[l];
        l--;
    }

    cout << r << nl;

    
    return 0;
}