#include <bits/stdc++.h>
using namespace std;

typedef union money{
    int rupees;
    float dollar;
    float bitcoin;
}currency;

int main (){
    
    currency favCar;
    currency favBike;

    //favCar.rupees = 30000000;
    //favCar.dollar = 390000;
    favCar.bitcoin = 7.88;
    //favCar.bitcoin = 7.77;
    favBike.bitcoin = 6.39;
    

    cout<<endl<<favCar.bitcoin<<endl;//<<favCar.dollar<<endl<<favCar.bitcoin<<endl<<endl;
    cout<<favBike.bitcoin;

    
    
    return 0;
}