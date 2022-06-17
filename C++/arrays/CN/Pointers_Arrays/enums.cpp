#include <bits/stdc++.h>
using namespace std;
int main (){
    
    //enums
    enum meal {breakfast, lunch, dinner};
    
    meal firstmeal = breakfast;
    cout<<firstmeal<<endl;
    cout<<endl;
    cout<<(breakfast == 0)<<endl; //1 means true nad 0 means false for checking "=="
    cout << (dinner == 3)<<endl; // 0 because dinner is equal to 2
    cout<<endl;
    cout<<dinner<<" : Value of dinner in enums"<<endl;
    // cout<< breakfast<<endl;
    // cout<< lunch<<endl;
    // cout<< dinner<<endl;

    
    return 0;
}