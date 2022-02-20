#include <stdio.h>

int main()
{
    char s1[78];
    char s2[78];

    char c;
    int i = 0;
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    
    while (c != ' ')
    {   
        scanf("%c", &c);
        s2[i] = c;
        i++;
    }
    s2[i] = '\0';
    printf("\n%s", s1);
    printf("\n%s", s2);
    return 0; 
}