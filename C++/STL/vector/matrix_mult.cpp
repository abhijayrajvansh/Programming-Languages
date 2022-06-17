#include <bits/stdc++.h>
using namespace std;
#define FO(i, z, n) for(int (i) = (z); (i) < (n); (i)++)
#define nl "\n"

int main (){
    //in matrix multiplication we multiply each row with each coloumn 

    int n; cin >> n;
    vector<vector<int>> matA (n, vector<int>(n));
    vector<vector<int>> matB (n, vector<int> (n));
    vector<vector<int>> res (n, vector<int> (n));

    FO(i, 0, n){
        FO(j, 0, n){
            int t; cin >> t;
            matA[i][j] = t;
        }
    }
    FO(i, 0, n){
        FO(j, 0, n){
            int t; cin >> t;
            matB[i][j] = t;
        }
    }
    FO(i, 0, n){
        FO(j, 0, n){
            res[i][j] = 0;
            FO(k, 0, n){
                res[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    FO(i, 0, n){
        FO(j, 0, n){
            cout << res[i][j] << " " ;
        }
        cout << nl;
    }
    return 0;
}