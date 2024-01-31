#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    double average;
    
    printf("\n How big is the array: ");
    scanf(" %d",&n);

    int arr[n];
    printf("\n Enter integers one at a time: \n");
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
        sum += arr[i];
    }

    average = sum/n;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
}