#include <bits/stdc++.h>
using namespace std;
#define FO(i, z, n) for(int (i) = (z); (i) < (n); (i)++)
#define nl "\n"
#define pb push_back
#define ppb pop_back

int main (){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("debug.txt", "w", stderr);
    #endif
    vector<int> v1;
    cout << "current capacity = " << v1.capacity() << nl;
    v1.pb(10);
    cout << "current capacity = " << v1.capacity() << nl;
    v1.pb(200);
    cout << "current capacity = " << v1.capacity() << nl;
    v1.pb(20);
    cout << "current capacity = " << v1.capacity() << nl;
    v1.pb(21);
    cout << "current capacity = " << v1.capacity() << nl;
    v1.pb(33);
    cout << "current capacity = " << v1.capacity() << nl;
    v1.pop_back();
    int n = v1.size();
    cout << "value of n = " << n << nl;
    FO(i, 0, v1.size()) {
        cout << v1[i] << nl;
    }
    cout << nl;
    cout << v1.front() << nl;
    cout << nl;
    cout << v1.back() << nl;
    return 0;
}