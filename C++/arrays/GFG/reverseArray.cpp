#include <bits/stdc++.h>
using namespace std;

int main (){

    int arr[] = {1, 2, 3, 4, 5};
    cout << "Given Array is : " << endl;
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // here n = 5
    cout << "Revrsed Array is : " << endl;
    // reversing using for loop ;
    // for (int i = 5-1; i >= 0; i--){
    //     cout << arr[i] << " ";
    // }
    
    // using gfg swap metheod :
    int i = 0, j = 5-1;
    while (i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}