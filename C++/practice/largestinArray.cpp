#include <bits/stdc++.h>
using namespace std;
int maxHeight(int arr[], int n){
    int res = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] > arr[res]){
            res = i;
        }
    }
    return res;
}
int main (){
    int arr[100];
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int idx = maxHeight(arr, n);
    //cout << "Largest Value of array : " << arr[idx] << endl;
    int c = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == arr[idx]){
            c++;
        }
    }
    //cout << "Frequency of largest value: " << c << endl;
    if (arr[idx] == arr[n-1]){
        cout << (2 * c) - 1;
    }
    else {
        cout << 2 * c;
    }
}


// array - 1 2 3 2 3