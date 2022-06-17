#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    int sum = 1, n1 = 1, n2 = 1;
    cout<<"0 1 ";

    for(int i = 0; i <= n; i++){
        
        cout<<sum<<" ";
        sum += n1;   // sum = 0+1=1 -- 1+1=2 -- 2+1=3 -- 3+2=5 -- 5+3=8 -- 8+5=13
        n1 = n2;     // n1 = 1->1 -- 1->1 -- 1->2 -- 2->3 -- 3->5 -- ....
        n2 = sum;    // n2 = 1->1 -- 1->2 -- 2->3 -- 3->5 -- 5->8 -- ....
             
    }
    cout<<"hehe re vaae\n";
}