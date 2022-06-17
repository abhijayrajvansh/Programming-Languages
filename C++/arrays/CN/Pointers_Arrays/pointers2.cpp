#include<bits/stdc++.h>
using namespace std;
int main (){
    int x = 10;
    
    int *xptr;
    xptr = &x;
    
    cout<<endl<<&x<<endl;
    cout<<xptr<<endl<<endl;

    cout<<*&x<<endl;
    cout<<*xptr<<endl<<endl;

    cout<<&(*xptr)<<endl;
    cout<<*(&xptr)<<endl;

}        