#include <bits/stdc++.h>
using namespace std;

void recoverArray(int input[], int output[], int n){
    int left, right;
    int i = 0;
    int mid = n / 2;
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
    int n; cin >> n;
    int output[100];
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    recoverArray(input, output, n);
    for (int i = 0; i < n; i++){
        cout << output[i] << " ";
    }
    return 0;
}