#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int m[n][n];
    int main_diag = 0, sec_diag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                main_diag += m[i][j];
            }
            if (i + j == n - 1)
            {
                sec_diag += m[i][j];
            }
        }
    }

    int diff = abs(main_diag - sec_diag);

    printf("%d\n", diff);

    return 0;
}