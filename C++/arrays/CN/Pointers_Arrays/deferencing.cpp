#include <bits/stdc++.h>
using namespace std;
int main (){
     
    //deferencing

    int x = 3;
    cout<<&x<<" : x=3 ka address\n\n"<<endl;

    int *xptr;
    xptr = &x;

    cout<<&x<<" : x=3 ka address\n";
    cout<<xptr<<" : x=3 ka address\n-------------------------------\n";

    cout<<*xptr<<endl;
    cout<<*&x<<endl<<"-------------------------------"<<endl;

    cout<<(*xptr)+2<<endl; // *xptr = 3 and 3+2 = 5

    cout<<*(xptr+2)<<" : garbage value" <<endl; // here xptr = the address which is &x and &x+2 will be some other address

    return 0;
}