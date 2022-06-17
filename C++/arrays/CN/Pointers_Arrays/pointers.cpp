#include <bits/stdc++.h>
using namespace std;

int main (){
    
    //memory allocations and address

    int a = 10;
    int b = 20;
    cout<<&a<<" : a"<<endl<<&b<<" : b\n\n\n";

    //pointers

    int *aptr;
    aptr = &a;
    
    cout<<&a<<" : a\n";
    cout<<aptr<<" : a\n"; //  because aptr = &a;

    


    
    return 0;
}