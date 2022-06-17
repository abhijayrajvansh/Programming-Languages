#include <bits/stdc++.h>
using namespace std;

typedef struct employee{
    long id;
    float salary;
    char grade;
}employee;

int main (){
    employee abhijay;
    
    abhijay.id = 2011003010398;
    abhijay.salary = 300000;
    abhijay.grade = 'A';

    cout<<abhijay.id<<endl<<abhijay.salary<<endl<<abhijay.grade<<endl;

    employee nilesh;
    nilesh.id = 2011003010380;
    nilesh.salary = 550000;
    nilesh.grade = 'A';

    cout<<nilesh.id<<endl<<nilesh.salary<<endl<<nilesh.grade<<endl;
    cout<<endl;
    cout<<"Hehe, Re Vaae"<<endl<<endl; 
    
    
    return 0;
}