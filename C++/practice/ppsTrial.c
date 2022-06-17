#include <stdio.h>
#include <stdbool.h>
int rainbowcheck(int arr[], int n){
    int rainbowcheck[7] = {1, 2, 3, 4, 5, 6, 7};
    int j = 0, c = 0;
    for (int i = 0; i < n / 2 + 1; i++){
        if (arr[i] == rainbowcheck[j]){
            j++;
            c++;
        }
    }
    return c;
}
int main (){
    int arr[1000];
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int ans = rainbowcheck(arr, n);
    if (ans == 7){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
}
// checking all the number in array by a sum 
//result of count ++ , for a particular no the 
//it means all the elements are present in the arrays