#include <iostream>
using namespace std;

int removeDul(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                do{
                    arr[j] = arr[j+1];
                }
                while(j < n);
            }
            break;
        }
    }
    return n-1;
}
int main (){

    int arr[100];
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    n = removeDul(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    return 0;
}