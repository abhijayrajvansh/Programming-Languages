#include <iostream>
using namespace std;

int max(int a, int b){

    return a > b ? a : b;
    
}
int maxSubSum(int arr[], int n){

    int res = arr[0];
    for(int i = 0; i < n; i++){
        int curr = 0;
        for(int j = i; j < n; j++){
            curr += arr[j];
            res = max(curr, res);
        }
    }
    return res;

}

void run_cases(){

    int arr[100];
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sol = maxSubSum(arr, n);
    cout << sol << endl;

}
int main (){

    run_cases();

}