#include <stdio.h>

//Programmer: Abhinav Sharma, Roll No: 21BCP134

int main() 
{
    printf("Input the name of the file to be encrypted: ");
    char path[100]; 
	scanf("%s", path);

    FILE *fpointr = fopen(path, "r");
    long length = 0, i = 0;
    fseek(fpointr, 0, SEEK_END);
    length = ftell(fpointr);
    fseek(fpointr, 0, SEEK_SET);

    char text[length+1];
    fread(text, 1, length, fpointr);
    text[length] = '\0'; 
    fclose(fpointr);

    fpointr = fopen(path, "w");
    for(i = 0; text[i] != '\0'; i++) 
	{
        fputc(text[i] - 69, fpointr);
    }
    fclose(fpointr);
    printf("File decrypted successfully\n");

    return 0;
}