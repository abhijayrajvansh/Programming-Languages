#include <iostream>
using namespace std;

bool checkSorting(int arr[], int n){
    //int i = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                return false;
            }
        }
    }
    return true;
}
int main (){

    int arr[1000];
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(checkSorting(arr, n)){
        printf("YES");
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}