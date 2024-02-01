#include <stdio.h>

int factorial(int);
int main()
{
    int target = 5;

    printf("\nThe factorial of %d is:  %d\n",target,factorial(target));
}
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}