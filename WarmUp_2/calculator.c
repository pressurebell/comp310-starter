#include <stdio.h>

int main()
{
    int n1,n2;

    printf ("\n Enter the first integer: ");  
    scanf(" %d", &n1);
    printf ("\n Enter the second integer: ");  
    scanf (" %d", &n2);

    printf("Addition: %d + %d = %d\n", n1, n2,n1+n2);
    printf("Subtraction: %d - %d = %d\n", n1, n2, n1-n2);
    printf("Multiplication: %d * %d = %d\n", n1, n2, n1 * n2);
    printf("Division: %d / %d = %.2f\n", n1, n2, (double)n1/n2);
}