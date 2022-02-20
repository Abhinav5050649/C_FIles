#include <stdio.h>
#include <math.h>

int main()
{
    int a = 10000;
    int digits = log2(a) + 1;
    printf("Digits = %d\n", digits);
    return 0;
}