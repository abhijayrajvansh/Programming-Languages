#include <bits/stdc++.h>
#define foin for(int i = 0; i < n; i++)
using namespace std;
int largest(int arr[], int n){
    int lar = 0;
    foin{
        if(arr[i] > arr[lar]){
            lar = i;
        }
    }
    return lar;
}
int secondLargest(int arr[], int n){
    int lar = largest(arr, n);
    int res = 0; // int res = -1;
    foin{                                              // 1, 2, 3, 4, ,5 - largest 
        if(arr[i] != arr[lar]){
            if(arr[i] > arr[res]){
                res = i;
            }
            // else if (res == -1){                   // i optimised this solution more !! xD
            //     res = i;
            // }
        }
    }
    return res;
}
int main (){

    int arr[100];
    int n; cin >> n;
    foin{
        cin >> arr[i];
    }
    int lar = largest(arr, n);
    cout << "Largest element is : " << arr[lar] << endl;
    int slar = secondLargest(arr, n);
    cout << "Second largest element is : " << arr[slar] << endl;
    return 0;
}