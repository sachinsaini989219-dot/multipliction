#include <stdio.h>

int main()
{
    int row1, column1, row2, column2;

    printf("enetr the numbers of rows in A1:");
    scanf("%d", &row1);
    printf("enetr the numbers of columns in A1:");
    scanf("%d", &column1);

    printf("enetr the numbers of rows in A2:");
    scanf("%d", &row2);
    printf("enetr the numbers of columns in A2:");
    scanf("%d", &column2);

    if (column1 == row2)
    {
        int A1[row1][column1];
        printf("Enter values of Matrix A1:-\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                printf("Enter A1[%d][%d]:", i + 1, j + 1);
                scanf("%d", &A1[i][j]);
            }
        }

        int A2[row2][column2];
        printf("Enter values of Matrix A2:-\n");
        for (int k = 0; k < row2; k++)
        {
            for (int l = 0; l < column2; l++)
            {
                printf("Enter A2[%d][%d]:", k + 1, l + 1);
                scanf("%d", &A2[k][l]);
            }
        }

        int result[row1][column2];
        for (int m = 0; m < row1; m++)
        {
            for (int n = 0; n < column2; n++)
            {
                result[m][n] = 0;
                for(int q = 0; q < column1; q++)
                {
                    result[m][n] += A1[m][q] * A2[q][n];
                }
            }
        }

        printf("RESULT MATRIX :-\n");
        for (int o = 0; o < row1; o++)
        {
            for (int p = 0; p < column2; p++)
            {
                printf("%d ", result[o][p]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter invalid order of mtrics");
    }
    return 0;
}