#include <stdio.h>
#include <stdlib.h> // For Abs Function

void update(int *a,int *b) {
    *a = *a + *b;
    *b = abs((*a - *b) - *b);
}

int main(void)
{
    int a, b;
    int *pA = &a, *pB = &b;
    
    scanf("%d %d", &a, &b);
    update(pA, pB);
    printf("%d\n%d", a, b);
    return 0;
}