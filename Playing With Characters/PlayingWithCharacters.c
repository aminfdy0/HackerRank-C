#include <stdio.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    /*
    The difference between %s and %[^\n]:

%s reads only one word (it stops at the first space).

%[^\n] reads the entire sentence until you press Enter.
    */
    scanf("%c\n%s\n %[^\n]", &ch, &s, &sen); 
    printf("%c\n%s\n%s\n", ch, s, sen); 
}