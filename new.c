#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *str = malloc(sizeof(char) * 100);
    if (str == NULL)
    {
        return -1;
    }

    printf("Enter a line of text: ");
    scanf("%[^\n]", str);

    for (int i = 0, n = strlen(str); i < n; i++)
    {
        str[i] = toupper(*(str + i));
    }

    printf("%s\n", str);
    free(str);
    return 0;
}