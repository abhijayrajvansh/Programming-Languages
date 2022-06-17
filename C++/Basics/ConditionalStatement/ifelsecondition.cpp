#include <iostream>
using namespace std;
int main (){
    
    //If else conditional statement
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    if (age>150){
        cout<<"Invalid age"<<endl;
    }
    else if (age>=18){
        cout<<"You can Vote!!"<<endl;
    }
    else{
        cout<<"You are not eligible to vote"<<endl;
    }
    return 0;
}