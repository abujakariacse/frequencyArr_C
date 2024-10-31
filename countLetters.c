#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000001];
    scanf("%s", str);

    int frequencyArr[26] = {0};

    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        int index = str[i] - 'a';

        frequencyArr[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        char letter = i + 'a';
        int count = frequencyArr[i];
        if (count > 0)
        {
            printf("%c : %d\n", letter, count);
        }
    }

    return 0;
}