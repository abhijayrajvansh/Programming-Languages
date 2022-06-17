#include <stdio.h>

void printMaxFreq(int arr[], int n){
    int i, j, count = 1, m = 0, e = 0;
    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            if (arr[j] == arr[i]){
                count++;
            }
        }
        if (count > m){
            m = count;
            e = arr[i];
        }
    }
    printf("%d", e);
}
int main()
{
    int h[10001];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &h[i]);
    }
    printMaxFreq(h, n);
	return 0;
}