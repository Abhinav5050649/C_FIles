#include <stdio.h>

FILE* Source_file()
{
    printf("Enter original file name and path(Please add double slash instead of single slash in path name): ");
    char str[100];
    scanf("%[^\n]", str);
    FILE *ptr = fopen(str, "r");
    return ptr;
}

FILE* Dest_file()
{
    printf("Enter destination file name and path(Please add double slash instead of single slash in path name): ");
    char str[100];
    scanf(" %[^\n]", str);
    FILE *out = fopen(str, "w");
    return out;
}

void Copy_File(FILE *fil1, FILE *fil2)
{
    char ch;
    while ((ch = getc(fil1)) != EOF)
    {
        fputc(ch, fil2);
    }
}

int main()
{
    FILE *file1 = Source_file();
    FILE *file2 = Dest_file();

    Copy_File(file1, file2);

    printf("Success!\n");
    return 0;
}