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
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (frequencyArr[arr[i]] <= 0)
        {
            count++;
        }
        frequencyArr[arr[i]] = 1;
    }
    printf("%d", count);
    return 0;
}