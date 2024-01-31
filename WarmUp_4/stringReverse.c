#include <stdio.h>
#include <string.h>

void reverse(char*, int, int);
int main()
{
    char input[16];
    int len,temp;
    
    printf("\n Enter a String (Max 16 Characters): ");
    scanf(" %s", input);
    len = strlen(input);

    reverse(input,0, len-1);
    printf("Reversed String: %s\n",input);
    return 0;
}
void reverse(char *x, int head, int tail)
{
    char c;
    if (head >= tail)
        return;
    c = * (x+head);
    * (x+head) = * (x+tail);
    * (x+tail) = c;
    reverse(x, ++head,--tail);
}