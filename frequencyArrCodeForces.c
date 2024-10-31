#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int findable;
    scanf("%d", &findable);

    int frequencyArr[100000] = {0};

    int numbers[n];

    // Get input of n numbers
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // Incrementing frequency arr index count;
    for (int i = 0; i < n; i++)
    {
        int frequencyIndex = numbers[i];

        frequencyArr[frequencyIndex]++;
    }

    // accessing numbers appearence how many times
    for (int i = 1; i <= findable; i++)
    {

        printf("%d\n", frequencyArr[i]);
    }

    return 0;
}