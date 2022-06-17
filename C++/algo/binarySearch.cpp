/**
*    author: abhijayrajvansh
*    12.07.2021  09:27:58
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

int binarySearch(int arr[], int n, int key){
    int s = 0, e = n - 1;
    while(s <= e){
        int mid = (s + e) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}


void run_cases(){
    int n, key;
    cin >> n;
    int arr[100];
    foin{
        cin >> arr[i];
    }
    cin >> key;
    cout << binarySearch(arr, n, key) << nl;
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
