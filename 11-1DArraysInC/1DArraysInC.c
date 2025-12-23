#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n;
    scanf("%i", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%i", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("%i",sum);
    free(arr);
}