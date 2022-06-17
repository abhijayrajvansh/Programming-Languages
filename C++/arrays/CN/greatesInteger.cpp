#include <bits/stdc++.h>
using namespace std;

int greatestInt(int arr[]){
    if (arr[0] > arr[1] && arr[0] > arr[2]){
        return arr[0];
    } 
    else if(arr[1] > arr[2]){
        return arr[1];
    }
    else {
        return arr[2];
    }
}

int main (){
    int a[1000];
    //int n;
    //cin >> n;
    for (int i = 0; i < 3; i++){
        cin >> a[i];
    }
    cout << greatestInt(a);

    return 0;
}