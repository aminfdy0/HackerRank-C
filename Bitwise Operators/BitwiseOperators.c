#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for (int i = 1; i <= n; i++)
     {
        for (int j = i + 1; j <= n; j++) 
        {
            int current_and = i & j;
            int current_or = i | j;
            int current_xor = i ^ j;

            if (current_and > max_and && current_and < k)
                max_and = current_and;

            if (current_or > max_or && current_or < k)
                max_or = current_or;

            if (current_xor > max_xor && current_xor < k)
                max_xor = current_xor;
        }
    }
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() 
{
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
