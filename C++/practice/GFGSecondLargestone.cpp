#include <iostream>
using namespace std;

int secondLargest(int arr[], int n){
    int res  = -1; int lar = 0;
    for (int i = 1; i < n; i++){
        if(arr[i] > arr[lar]){
            res = lar;
            lar = i;
        }
        else if (arr[i] != arr[lar]){
            if(res == -1 || arr[i] > arr[res]){
                res = i;
            }
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
    int res = secondLargest(arr, n);
    cout << "second Largest element is : " << arr[res] << endl;
    return 0;
}