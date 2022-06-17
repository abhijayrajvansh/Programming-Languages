#include <bits/stdc++.h>
using namespace std;
int main (){

    float a[100];
    int n;
    cout << "Input the number of terms : ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << "1/" << i << " + ";
    }
    cout << endl;
    float k = 1, s = 0;
    for (int i = 0; i < n; i++){
        a[i] = 1 / k;
        k++;
    }
    // cheking the values of array :- 
    // for (int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < n; i++){
        s += a[i];
    }
    cout << "Sum of Series up to " << fixed << setprecision(6) <<  n << " terms : " << s << endl;
    /* 'C++' 
    printf("Sum of Series up to %d terms : %.6f\n", n, s); - 'C' 
	*/
return 0;
}