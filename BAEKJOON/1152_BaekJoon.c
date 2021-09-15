#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];
    int is_first = 1, len, count = 0;

    scanf("%[^\n]s", str);
    len = strlen(str);
    for (int i = 0 ; i < len ; i++)
    {
        if (str[i] != ' ' && is_first == 1)
        {
            count++;
            is_first = 0;
        }
        if (str[i] == ' ')
            is_first = 1;
    }

    printf("%d\n", count);

    return 0;
}