#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int x){
    for (int i = 0;i < n; i++){
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}
int main (){

    int ar[1000];
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> ar[i];
    }
    int x; cin >> x;
    int ans = linearsearch(ar, n , x);
    cout << "Your element is present at " << ans << " index" << endl;

    return 0;
}