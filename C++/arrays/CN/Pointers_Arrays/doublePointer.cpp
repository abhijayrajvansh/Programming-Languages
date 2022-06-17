#include <bits/stdc++.h>
using namespace std;
int main (){
    
    //Double Pointer
    
    int x = 10;
    int *xptr;
    xptr = &x;
    cout<<endl<<&x<<" : address of x" <<endl;
    cout<<endl;

    cout<<&xptr<<" : address of xptr"<<endl;

    int **xxptr = &xptr; // storing address of xptr in xxptr
    cout<<xxptr<<" : address of xptr"<<endl; // xxptr = &xptr
    cout<<endl;
    cout<<&xxptr<<" : address of xxptr"<<endl;

    return 0;
}