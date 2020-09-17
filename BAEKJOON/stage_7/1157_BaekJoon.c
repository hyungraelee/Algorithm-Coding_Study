#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];
    int upper_case[26] = {0, };
    int max = 0, count = 0, max_index, len;

    scanf("%s", str);
    len = strlen(str);
    for (int i = 0 ; i < len ; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper_case[(int)(str[i] - 'A')]++;
        if (str[i] >= 'a' && str[i] <= 'z')
            upper_case[(int)(str[i] - 'a')]++;
    }
    for (int i = 0 ; i < 26 ; i++)
    {
        if (upper_case[i] > max)
        {
            max = upper_case[i];
            max_index = i;
        }
    }
    for (int i = 0 ; i < 26 ; i++)
    {
        if (upper_case[i] == max)
            count++;
    }
    if (count > 1)
        printf("?");
    else if (count == 1)
        printf("%c", max_index + 'A');
    return 0;
}