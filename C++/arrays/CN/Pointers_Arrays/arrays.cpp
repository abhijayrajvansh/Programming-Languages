#include <bits/stdc++.h>
using namespace std;
int main (){
    
    // int marks [] = {123, 456, 789, 3478, 3278};

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    int subMarks[] = {213,4,325,4535,676,778};

    cout<<endl<<"------------using for loop----------------\n"<<endl;
    for (int i=0; i<6; i++){
        cout<<"marks for subs are : "<<subMarks[i]<<endl;
    }
    cout<<endl<<"------------using while loop----------------\n"<<endl;

    int n = 0;

    while(n<=5){
        cout<<"marks for subs are : "<<subMarks[n]<<endl;
        n++;
    }
    cout<<endl<<"------------using do while loop----------------\n"<<endl;

    int x =0;

    do{
        cout<<"marks for subs are :"<<subMarks[x]<<endl;
        x++;
    }
    while (x<6);
    cout<<endl;
    
    return 0;
}