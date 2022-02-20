//https://codeforces.com/problemset/problem/281/A
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1200];
    scanf("%s", str);

    if (isupper(str[0]) == 0)
    {
        str[0] = toupper(str[0]);
    }
    else
    {
        str[0] = str[0];
    }

    printf("%s\n", str);
    return 0;
}