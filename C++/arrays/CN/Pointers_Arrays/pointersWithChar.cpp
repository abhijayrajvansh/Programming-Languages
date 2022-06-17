#include <bits/stdc++.h>
using namespace std;
int main (){
    
    //pointers with characters;
    int a[]= {12,23,34};
    char b[]= "abhijay";
    cout<<endl;
    cout<<a<<endl; // Address of a[0];
    cout<<b<<endl; //prints the value of char as strings

    char siglechar = 'A';
    char *singlecharptr = &siglechar;
    cout<<endl;
    cout<<siglechar<<endl;
    cout<<siglechar<<endl;
    
    return 0;
} 