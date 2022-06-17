#include <iostream>
using namespace std;

int reverse(int arr[], int n){
    int i = 0; int j = n - 1;
    while (i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; j--;
    }
    return n;
}
int main (){

    int arr[100];
    int n; cin >>n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    n = reverse(arr, n);
    cout << "Your reversed array is : " << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}