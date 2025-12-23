#include <stdio.h>
int main(void) 
{
    char ch;
    char s[100];
    char sen[100];

    scanf("%c\n%s\n %[^\n]", &ch, &s, &sen);
    //%s reads only one word (it stops at the first space).
    //%[^\n] reads the entire sentence until you press Enter.
    printf("%c\n%s\n%s\n", ch, s, sen);
    return 0;
}