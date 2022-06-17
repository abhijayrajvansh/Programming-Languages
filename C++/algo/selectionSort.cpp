/**
*    author: abhijayrajvansh
*    13.07.2021  02:27:41
**/
#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define nl "\n"
#define PI (3.141592653589793238462)
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define foin for(int i = 0; i < n; i++)
#define matloop for(int i = 0; i < m; i++) for(int j = 0; j < n; j++)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void ss(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

void run_cases(){
    int n; cin >> n;
    int arr[100];
    foin{
        cin >> arr[i];
    }
    ss(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    //cin >> T;
    while(T--){
        run_cases();
    }
   return 0;
}