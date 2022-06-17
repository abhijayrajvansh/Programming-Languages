#include <iostream>
using namespace std;

int insert(int arr[], int n, int x, int idx){
    idx--;
    for (int i = n-1; i >= idx; i--){
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return n + 1;
    
}
int main (){

    int arr[100];
    cout << "enter the size of array : ";
    int size; cin >> size;
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "enter the number you wanna insert: ";
    int num; cin >> num;
    cout << "Enter the place where you wanna insert :";
    int place; cin >> place;
    int newidx = insert(arr, size, num, place);
    //cout << newidx;
    cout << "Your desired array is : " << endl;
    for (int i = 0; i < newidx; i++){
        cout << arr[i] << " ";
    }

    return 0;
}