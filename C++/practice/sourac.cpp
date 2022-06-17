#include <bits/stdc++.h>
using namespace std;

int main (){

	int s, day, hrs, min, sec; cin >> s;
	// 145357
	// 1 - 16 - 22 - 37
	day = s / 86400;
	hrs = (s % 86400) / 3600;
	min = ((s % 86400) % 3600) / 60;
	sec = ((s % 86400) % 3600) % 60;
	cout << day << endl << hrs << endl << min << endl << sec << endl;

	
	return 0;
}

       //  2 ) 5 (2
       //      4
       //      -
       //      1
       //         int 1 = float 1.0000

//          5 % 2 = 1 (remainder)
//          5 / 2 = 2 (quotient)