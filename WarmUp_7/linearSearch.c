#include <stdio.h>
#include <stdlib.h>

int search(int *,int,int);
int main()
{
    int arr[5] = {1,2,3,4,5};
    int target = 3;
    printf("\nThe target is at index: %d\n", search(arr,target,5));
    return 0;
}
int search(int arr[],int target, int n)
{
    for (int i = 0; i<n; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
    }
    return 0;
}
