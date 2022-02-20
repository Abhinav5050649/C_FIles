#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("not a multiple of 2\n");
    } 
    else if (n == 1)
    {
        printf("Number is one!\n");

    }
    else
    {
        if (n && (!(n &(n -1))) == 1)
        {
            printf("Multiple of 2!\n");
        }
        else
        {
            printf("Not a multiple of 2!\n");
        }
    }
}