#include <bits/stdc++.h>
using namespace std;

int main (){
    int ar[100];
    int n, key;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> ar[i];
    }
    cout << "Enter the key you want to search : ";
    cin >> key;
    int i;
    for (i = 0; i < n; i++){
        if (key == ar[i]){
            cout << key << " is present at " << i <<endl;
            break;
        }
    }
    if (i == n){
        cout << "your required key is not present" << endl;
    }
    return 0;
}

// french syllabus
// salutation and numbers 