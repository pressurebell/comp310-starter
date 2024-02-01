#include <stdio.h>

int main()
{
    
    int matrix1[2][2] = {{1,2},{1,2}};
    int matrix2[2][2] = {{1,2},{1,2}};
    int sum[2][2];
    int product[2][2];

    //Addition
    printf("\n Addition : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j< 2; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf(" %d", sum[i][j]);
        }
        printf("\n");
    }

    // Multiplication(Broken)
    printf("\n Multiplication : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j< 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf(" %d", product[i][j]);            
        }
        printf("\n");
    }
    return 0;
}