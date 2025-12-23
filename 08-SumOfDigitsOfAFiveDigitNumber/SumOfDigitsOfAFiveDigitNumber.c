#include <stdio.h>
int main() {
	
    int n;
    scanf("%d", &n);
    int ncopy = n;
    int sum = 0;
    if (n >= 10000 && n <= 99999)
    {
        while (ncopy > 0) {
            sum += (ncopy % 10);
            ncopy /= 10;
        }
    }
    printf("%i", sum);
}