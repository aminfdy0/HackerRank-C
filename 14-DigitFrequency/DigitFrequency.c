#include <stdio.h>
int main(void)
{
    char str[1000];
    scanf("%s", &str);

    int numbers[10] = {0,0,0,0,0,0,0,0,0,0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            numbers[str[i] - '0'] += 1;
        } 
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", numbers[i]);
    }
}