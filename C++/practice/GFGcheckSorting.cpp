#include<iostream>
using namespace std;

bool checkSorting(int arr[], int n){
    for (int i = 1; i < n; i++){ // we cant start from i = 0 because (0 -1 = -1) and arr[-1] has some garbage value;
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}
int main (){

    int arr[100];
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(checkSorting(arr, n)){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}