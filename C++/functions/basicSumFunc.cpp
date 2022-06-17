#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}
int main (){
    cout<<"-------------------------------------------------"<<endl;
    cout<<"This program will add two numbers given by user!!\n";
    cout<<"-------------------------------------------------\n"<<endl;

    cout<<"Enter your first number: ";
    int num1, num2;
    cin>>num1;
    cout<<"Enter your second number: ";
    cin>>num2;
    cout<<"The sum is : "<<sum(num1, num2)<<endl;
    return 0;
}