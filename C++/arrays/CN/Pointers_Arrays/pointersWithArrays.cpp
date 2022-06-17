#include <bits/stdc++.h>
using namespace std;
int main (){
    
    //Pointers with arrays

    int marks []= {131,23443,45,36,456,57,568};
    int *p = marks;

    for(int i = 0; i<7; i++ ){
        cout<<"The value of marks "<<i<<" : "<< *(p+i) <<endl;
        
        /* here brackets are also important 
        while defining pointers because the increment
        may get added in just (*p) value */
    }
    
    return 0;
}