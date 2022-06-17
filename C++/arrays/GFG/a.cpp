/*````````````````````````````````Debug``````````````````````````````````
```````` Author: abhijayrajvansh && ID: abhijayrajvansh01@gmail.com````*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define checkSort (checkSorted(arr, n)) ? cout << "sorted" : cout << "not sorted"

bool checkSorted(int arr[], int n){
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}

int countDistinct(int arr[], int n){
    int count = 0;
    bool isDistinct = true;
    for(int i = 0; i < n; i++){
        isDistinct = true;
        for(int j = i - 1; j >= 0; j--){
            if(arr[i] == arr[j]){
                isDistinct = false;
            }
        }
        if(isDistinct == true){
            count++;
        }
    }
    return count;
    
}

int sumofarray(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

double isAverage(int arr[], int n){
    int avg;
    int sum  = sumofarray(arr, n);
    return (double)sum / n;
}

int maxEle(int arr[], int n){
    int max = 0;
    for(int i = 0; i < n; i++){
        if(arr[max] < arr[i]){
            max = i;
        }
    }
    return arr[max];
}

void run_cases(){
   int n; cin >> n;
   int arr[100];
   for(int i = 0; i < n; i++){
       cin >> arr[i];
   }
   cout << maxEle(arr, n);
}

int main() 
{
#ifndef ABHIJAY_DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	run_cases();
	return 0;
}