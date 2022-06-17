#include <bits/stdc++.h>
using namespace std;

void recoverArray (int input[], int n, int output[]){
    int left, right;
    int mid = n / 2;
    int i = 0;
    if (n % 2 != 0){
        output[mid] = input[i];
        left = mid - 1;
        right = mid + 1;
        i++;
    }
    else{
        left = mid - 1;
        right = mid;
    }
    while (i < n){
        output[left] = input[i];
        left--;
        i++;
        output[right] = input[i];
        right++;
        i++;
    }
}
int main (){
    int input[100];
    int n;
    cin >> n;
    int output[100];
    for (int i = 0; i < n; i++){
        cin >> input[i];
    }
    recoverArray(input, n, output);
    for (int i = 0; i < n; i++){
        cout << output[i] << " ";
    }
    return 0;
}

// in: 
// 5 
// 32415

// op: 12345


// 0 1 2 3 4 5 
// n = 6
// left = 6/2 = 3-1= 2