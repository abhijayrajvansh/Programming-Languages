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

    int n;
    cin >> n;
    vector<vector<int>> mat (n, vector<int> (n));
    vector<vector<int>> ans (n, vector<int> (n));
    cout << "current size of the vector = " << mat.size() << nl;
    FO(i, 0, n){
        FO(j, 0, n){
            int a; cin >> a;
            mat[i][j] = a;
        }
    }
    cout << "current matrix:" << nl;
    FO(i, 0, n){
        FO(j, 0, n){
            cout << mat[i][j] << " " ;
        }
        cout << nl;
    }
    cout << "current size of the vector = " << mat.size() << nl;
    cout << "after transpose" << nl;
    FO(i, 0, n){
        FO(j, 0, n){
            ans[i][j] = mat[j][i];
            cout << ans[i][j] << " ";
        }
        cout << nl;
    }


    return 0;
}