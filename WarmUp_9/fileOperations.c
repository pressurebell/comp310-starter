#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("fileOp.txt", "w");
    
    fprintf(file, "Hello, World!\n");
    fclose(file);
    file = fopen("fileOp.txt","r");

    char c;
    c = fgetc(file);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(file);
    }
    fclose(file);
    return 0;
}