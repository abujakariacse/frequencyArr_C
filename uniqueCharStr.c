#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[n + 1];

    scanf("%s", str);

    int frequencyArrStr[26] = {0};

    for (int i = 0; i < n; i++)
    {
        int index = str[i] - 'a';
        frequencyArrStr[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequencyArrStr[i] > 0)
        {
            printf("%c", i + 'a');
        }
    }

    return 0;
}