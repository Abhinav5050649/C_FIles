#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char* argv[])
{
    FILE *file1 = fopen(argv[1], "r");
    if (file1 == NULL)
    {
        return -1;
    }

    FILE *file2 = fopen(argv[2], "w");
    if (file2 == NULL)
    {
        return -1;
    }

    BYTE buffer[10];
    while (fread(&buffer, sizeof(BYTE), 10, file1))
    {
        fwrite(&buffer, sizeof(BYTE), 10, file2);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}