#include <stdio.h>

int main()
{
	int inb1, inb2;
    float fnb1, fnb2;

    printf("Enter Two Number (int type): ");
    scanf("%i %i", &inb1, &inb2);

    printf("Enter Two Numbe (float type): ");
    scanf("%f %f", &fnb1, &fnb2);

    printf("sum:%i difference:%i\n", (inb1 + inb2) , (inb1 - inb2));
    printf("sum:%.1f difference:%.1f", (fnb1 + fnb2), (fnb1 - fnb2));
    
    return 0;
}