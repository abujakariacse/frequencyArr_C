#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int frequencyArr[100000] = {0};

    for (int i = 0; i < n; i++)
    {
        int element = arr[i];

        frequencyArr[element] = 1;
    }

    int findLength;
    scanf("%d", &findLength);

    for (int i = 0; i < findLength; i++)
    {
        int x;
        scanf("%d", &x);

        if (frequencyArr[x] == 1)
        {
            printf("Ache ");
        }
        else
        {
            printf("Nai ");
        }
    }
    return 0;
}