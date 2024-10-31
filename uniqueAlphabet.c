#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "apple";

    int strLength = strlen(str);

    int frequencyStrArr[26] = {0};

    for (int i = 0; i < strLength; i++)
    {
        int index = str[i] - 'a';

        frequencyStrArr[index] = 1;
    }

    for (int i = 0; i < 26; i++)
    {

        if (frequencyStrArr[i] == 1)
        {
            printf("%c %d\n", i + 'a', frequencyStrArr[i]);
        }
    }

    return 0;
}