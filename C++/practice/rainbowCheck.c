#include <stdio.h>
#include <stdbool.h>

int rainbowcheck(int arr[], int n){
    int rainbowcheck[7] = {1, 2, 3, 4, 5, 6, 7};
    int j = 0;
    while (j < 7){
        for (int i = 0; i < n / 2; i++){
            if (rainbowcheck[j] == arr[i]){
                j++;
            }
        }
    }
    return j;
    
}
bool rainbowtrue(int arr[], int n){
    int i = 0, j = n - 1;
    while (i < j){
        if (arr[i] == arr[j]){
            i++;j--;
        }
        else{
            return false;
        }
    } 
    return true;   
}
int main()
{
    int t, i; scanf("%d", &t);
    while(t--){
        int N; scanf("%d", &N);
        int A[N];
        for (i = 0; i < N; i++){
            scanf("%d", &A[i]);
        }
        if (rainbowtrue(A, N)){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
	return 0;
}
// 1
// 17
// 1 3 4 4 5 6 6 6 7 6 6 6 5 4 4 3 1

//1 2 3 4 5 6 5 4 3 2 1 