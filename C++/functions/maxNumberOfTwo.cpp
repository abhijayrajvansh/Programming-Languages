#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
    if (a > b){
        return a;
    }
    else {
        return b;
    }
}
int main (){
    int x, y;
    cin >> x >> y;
    cout << max(x, y);
    return 0;
}