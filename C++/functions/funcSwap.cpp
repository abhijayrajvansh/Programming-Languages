#include <bits/stdc++.h>
using namespace std;

int main (){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    int temp = a;
    a=b;
    b=temp;
    
    cout<<"The value of a and b is :"<<a<<" "<<b<<endl;
    
    return 0;
}