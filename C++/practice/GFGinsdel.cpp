#include <bits/stdc++.h>
using namespace std;

int insertEle(int arr[], int n, int x, int pos){
    int idx = pos - 1;
    for (int i = n-1; i >= idx; i--){
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return n + 1;
}
int deleteEle(int arr[], int n, int x){
    int index;
    // Searching Part
    for (int i = 0; i < n; i++){
        if(arr[i] == x){
            index = i;
        } 
    }
    // deleting part
    for (int i = index; i < n; i++){
        arr[i] = arr[i + 1];
    }
    return n - 1;
}
int main (){

    int arr[100];
    //cout << "Some instrution you need to follow: \n1. Enter the size of array & then all the elements...\n2. Enter the number you wanna insert\n3. Enter the position you wanna insert\n" << endl;
    cout << "Some instrution you need to follow: \n1. Enter the size of array & then all the elements...\n2. Enter the number you wanna delete\n" << endl;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x, pos;
    cin >> x;// >> pos;
    //n = insertEle(arr, n, x, pos);
    n = deleteEle(arr, n , x);
    // if(n == -1){
    //     cout << "Your element was not present in array";
    // }
    
    //cout << "Value of n after deleting : " << n << endl;
     
    cout << "\nPrinting the new array: " << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}