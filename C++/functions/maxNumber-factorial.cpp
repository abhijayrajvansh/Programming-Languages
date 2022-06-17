#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
    if (a > b){
        return a;
    }else {
        return b;
    }
}
int fact(int n, int factSum = 1){
    for (int i = 1; i <= n; i++){
        factSum *= i;
    }
    return factSum;
}
int main (){
    int x, y;
    cin >> x >> y;
    cout << "factorial of " << x << " is : " << fact(x) << endl;
    cout << "maximum no is : " << max(x, y) << " \n";
    return 0;
}
