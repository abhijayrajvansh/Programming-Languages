#include <bits/stdc++.h>
using namespace std;
// this program works for only one test case

void dupEle(int ar[], int n){
    int j = 0;
    while (j < n){
        if (ar[j] == ar[j+1]){
        cout << ar[j];
        break;
        }
        else{
          j++;
        }
    } 
}

int main (){
    int ar[100], testcases, a = 1;
    cin >> testcases;
    int n;
    while (a <= testcases){
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> ar[i];
        }
        a++;   
    }
    dupEle(ar, n);
    while(a <= testcases){
        a++;
    }
    return 0;
}

/*void findDuplicate(int ar[], int n){
    if (ar[0] == ar[1]){
        cout << ar[0];
    }
    else{
        cout << ar[2];
    }
}

int main (){
    int i = 1, testcases;
    cin >> testcases;
    int ar[100];
    int n;
    while(i <= testcases){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> ar[j];
        }
        i++;
    }
    while(i <= testcases){
        findDuplicate(ar, n);
        i++;
    } */