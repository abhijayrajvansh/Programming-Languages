#include <iostream>
using namespace std;
int main (){
    
    //sing switch to create cases
    
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    switch(age){

        case 12:{
            cout<<"You are 12 years old"<<endl;
            break;
        }
        case 18:{
            cout<<"you are 18 years old"<<endl;
            break;
        }
        default:{
            cout<<"You are neither 12 nor 18 years old"<<endl;
        }
    }
    
    return 0;
}