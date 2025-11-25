#include <stdio.h>
int main()
{
    int nb;
    char *nbname[10] = {"zero", "one", "two", "tree", "four" ,"five", "six", "seven" ,"eight", "nine"};
    scanf("%i", &nb);
    if (nb > 9)
        printf("Greater than 9");
    // else if (nb < 0)
    //     printf("Negative Number");
    else
        printf("%s", nbname[nb]);
}