#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    //Write your logic to print the tokens of the sentence here.
    for (int i = 0; s[i] != '\0'; i++) { 
        printf("%c", s[i]);
        if (s[i] == 32) { // 32 in Ascci Equal Space
                printf("\n");
        }
    }
    free(s);
    return 0;
}