#include <bits/stdc++.h>
using namespace std;

int maxSegSum(int a[], int n, int b[], int m, int maxsum){
    int i = 0; int j = 0, sum1 = 0, sum2 = 0;
    maxsum = 0;
    while (i < n && j < m){
        if (a[i] > b[j]){
            sum1 += a[i];
            i++;
        }
        else if(a[i] == b[j]){
            sum1 += a[i];
            sum2 += b[j];
            if (sum1 > sum2){
                maxsum = sum1;
            }
            else{
                maxsum = sum2;
            }
        }
        else{
            sum2 += b[j];
            j++;
        }
    }
    while(i < n){
        sum1 += a[i];
        i++;
    }
    while(j < m){
        sum2 += b[j];
        j++;
    }
    return maxsum;
}
int main (){
    
    // given array 
    // a-> 1 5 - 8 12 20 25 - 30 35
    // b-> 2 3 5 - 6 25
    int a[100], b[100], n, m;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    int i = 0; int j = 0, sum1 = 0, sum2 = 0, maxsum = 0;
    while (i < n && j < m){
        if (a[i] > b[j]){
            sum1 += a[i];
            i++;
        }
        else if(a[i] == b[j]){
            sum1 += a[i];
            sum2 += b[j];
            if (sum1 > sum2){
                maxsum = sum1;
            }
            else{
                maxsum = sum2;
            }
        }
        else{
            sum2 += b[j];
            j++;
        }
    }
    while(i < n){
        sum1 += a[i];
        i++;
    }
    while(j < m){
        sum2 += b[j];
        j++;
    }
    cout << maxsum;
    return 0;
}