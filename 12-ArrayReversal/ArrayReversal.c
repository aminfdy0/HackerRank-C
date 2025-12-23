#include <stdio.h>
#include <stdlib.h>
void revrseArr(int arr[], int size)
{
    int start = 0;
    int last = size - 1;
    while (start < last)
    {
        int temp = arr[start];
        arr[start] = arr[last];
        arr[last] = temp;
        start++;
        last--;
    }
    for (int i = 0; i < size; i++) {
        printf("%i ", arr[i]);
    }
}
int main(void){
    int n;
    scanf("%i", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%i", &arr[i]);
    }
    revrseArr(arr, n);
    free(arr);
}