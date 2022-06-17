#include <bits/stdc++.h>
using namespace std;


void deb(int x, int b[]){
    cout << x << endl;
    cout << b[0] << endl; // here when it is cout << b; it actually send the first array 0th add. (hexadecimal) )x7ffeebe81780 
}
void printArray(int input[], int n){

    // cout << "Function Array Size : " << sizeof(input) << endl; // = 8

    // int size = sizeof(input) / sizeof(int); 8 / 4 = 2;
    for (int i = 0; i < n; i++){
        cout << input[i] << " ";
    }
    cout << endl;
}

int main (){
    
    int input[] = {1, 2, 3};
    int a = 6;
    cout << endl << "Debuging TestCase 1 : " << endl; cout << "---------------------" << endl;
    // cout << "Main Array Size : " << sizeof(input) << endl;
    deb(a, input);
    printArray(input, sizeof(input) / sizeof(int)); // sizeof(input) / sizeof(int) = 3
    return 0;
}