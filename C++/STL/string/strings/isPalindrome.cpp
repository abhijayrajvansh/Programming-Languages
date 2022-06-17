#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(char arr[]){

    int i = 0, j = strlen(arr) - 1;
    while(i < j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;

} 
int main (){
    int t;
    cin >> t;
    while (t--){
        char a[1000];
        cin.getline(a, 1000);

        if (isPalindrome(a)){
            cout << "YES\n";
        }
        else {
            cout <<"NO\n";
        }
    } 
    return 0;
}