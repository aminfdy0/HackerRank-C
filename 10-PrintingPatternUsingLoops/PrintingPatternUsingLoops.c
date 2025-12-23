#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int size = n*2-1;
    int arr[size][size];
    int start = 0, end = size - 1;
    
    for (int i = n; i > 0; i--) 
    {
        for (int j = start; j <= end; j++) 
        {
            for (int k = start; k <= end; k++)
            {
                arr[j][k] = n;
            }
        }
        start++;
        end--;
        n--;
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}