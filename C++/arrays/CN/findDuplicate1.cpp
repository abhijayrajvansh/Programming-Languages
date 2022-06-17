#include <bits/stdc++.h>
using namespace std;

// Approach 1

void findDuplicate(int ar[]){
    if (ar[0] == ar[1] || ar[0] == ar[2] || ar[0] == ar[3] || ar[0] == ar[4]){
        cout << ar[0];
    }
    else if (ar[1] == ar[2] || ar[1] == ar[3] || ar[1] == ar[4]){
        cout << ar[1];
    }
    else if(ar[2] == ar[3] || ar[2] == ar[4]){
        cout << ar[2];
    }
    else if( ar[3] == ar[4]){
        cout << ar[3];
    }
        
}
int main(){
    int ar[100];
    for (int i = 0; i < 5; i++){
        cin >> ar[i];
    }
    findDuplicate(ar);
    return 0;
}
