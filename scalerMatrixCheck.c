#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    // initially true as a scaler matrix flag.
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int firstElement = matrix[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Main diagonal -> row == column
            if (i == j)
            {
                // Checking main diagonal values same or not
                if (matrix[i][j] != firstElement)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                // Checking other values 0 or not
                if (matrix[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    if (flag)
    {
        printf("Scaler");
    }
    else
    {
        printf("Not Scaler");
    }

    return 0;
}

/*
Condition to be a sacler matrix:-
1. Diagonal
2. Same diagonal elements
3. Other values 0 without main diagonal value
4. All values is 0
*/
