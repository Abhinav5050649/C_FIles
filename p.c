#include <stdio.h>

int main()
{
    char str[4][50] = {
        {'s', 't', 'r', 'i', 'n', 'g'},
        {'h', 'e', 'l', 'l', 'o'},
        {'a'},
        {'b', 'a', 'l', 'l'}
    };

    for (int i = 0; i < 4; i++)
    {
        printf("Word: ");
        for (int j = 0; str[i][j] != '\0'; j++)
        {
            printf("%c", str[i][j]);
        }
        printf("\n");
    }

    return 0;
}