#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
void printPrimes(int N){
    for (int i = 2; i <= N; i++){
        if (checkPrime(i)){
            cout << i << " ";
        }
    }
}
int main (){
    int a; cin >> a;
    if (checkPrime(a)){
        cout << "Number is Prime !" << endl;
    }
    else {
        cout << "Number ins't prime." << endl;
    }
    printPrimes(a);
    return 0;
}


