#include <bits/stdc++.h>
#include <cstring>
using namespace std;
void printallprefixes(char input[]){
    for (int i = 0; input[i] != '\0'; i++){
        for (int j = 0; j <= i; j++){
            cout << input[j];
        }
        cout << endl;
    }
}
int main (){
        // int a[5] = {1, 2, 3};
        // char b[] = "abhijay";
        //cin >> b;
        //cout << b;
        /*
        cin.getline(b, 40, 'o');
        cout << b << endl;
        */
    //    char i[100], j[100];
    //    cin >> i >> j;
    //    if (strcmp(i, j) == 0){
    //        cout << "true" << endl;
    //    }
    //    else{
    //        cout << "false" << endl;
    //    }
    /*int len = strlen(i);r
    cout << "Length : "len << endl;
        */
    //    char a[100] = "defd";
    //    char b[100] = "xy";

    //    cout << "Before copying " << "(a)Input 1: " << a << endl;
    //    cout << "Before copying " << "(b) Input 2: " << b << endl;

    //     //strcpy(a, b);
    //     strncpy(a, b, 4);
    //     cout << "After copying" << endl << "the values of a is : " << a << endl;

    char input1[100] = "abcd";
    printallprefixes(input1);
    return 0;
}