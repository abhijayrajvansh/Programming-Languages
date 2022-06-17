#include <bits/stdc++.h>
using namespace std;

int area(struct Rectangle r1){
    return r1.length * r1.breadth;
}
struct Rectangle{
    int length, breadth;
};
int main (){
    struct Rectangle r = {10, 5};
    printf("%d\n", area(r));
    return 0;
}