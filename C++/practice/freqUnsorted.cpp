#include <iostream>
using namespace std;

void freqCount(int arr[], int n){
    int freq = 1; int i = 1;
    while(i < n){
        while(i < n && arr[i] == arr[i-1]){
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1; 
    }
    if(n == 1 || arr[n-1] != arr[n-2]){
        cout << arr[n-1] << " " << 1 << endl;
    }      
}


int main (){
    int arr[100];
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    freqCount(arr, n);
    return 0;
}