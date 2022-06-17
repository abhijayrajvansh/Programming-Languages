#include <bits/stdc++.h>
using namespace std;

//Function Protoytpes
//fuctions has to be defined before hand what is going to be executed next

int sum (int a, int b); // this tells the compiler to complile to code and wait for the function
//----------------------// also gives assurity
void greet(void);


int main (){
    cout<<"-------------------------------------------------"<<endl;
    cout<<"This program will add two numbers given by user !!\n";
    cout<<"-------------------------------------------------\n"<<endl;

    cout<<"Enter your first number: ";
    int num1, num2;
    cin>>num1;
    cout<<"Enter your second number: ";
    cin>>num2;
    cout<<"\nThe sum is : "<<sum(num1, num2)<<endl;
    greet();
    return 0;
}

int sum(int a, int b){
    return a+b;
}

void greet(){
    cout<<("\nThis was an example of function prototypes\n\n");
}