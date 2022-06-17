#include <bits/stdc++.h>
using namespace std;

// Approach 2

void findDuplicate(int ar[], int n){
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i != j ||  ar[i] == ar[j]){
                cout << ar[i];
            }
        }
    }
}

int main(){
    int ar[100];
    for (int i = 0; i < 5; i++){
        cin >> ar[i];
    }
    findDuplicate(ar, 5);
    return 0;
}
