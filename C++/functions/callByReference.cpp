#include <bits/stdc++.h>
using namespace std;

// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;           // Using pointers
//     *b = temp;
// }
int sum(int a, int b){
    return a+b;
}

void swapWithRef(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;   
}

int main (){
    int x = 10, y = 20;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapWithRef(x, y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    cout<<"The sum of X and Y is: "<<sum(x, y)<<endl;
    return 0;
}
