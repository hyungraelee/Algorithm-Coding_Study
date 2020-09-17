#include <stdio.h>

int main()
{
    char str[101];
    int count = 0, i = 0;

    scanf("%s", str);
    while (str[i])
    {
        if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
        {
            count++;
            i += 3;
            continue ;
        }
        if ((str[i] == 'l' || str[i] == 'n') && str[i + 1] == 'j')
        {
            count++;
            i += 2;
            continue ;
        }
        if ((str[i] == 'c' || str[i] == 'd' || str[i] == 's' || str[i] == 'z') && (str[i+1] == '-' || str[i+1] == '='))
        {
            count++;
            i += 2;
            continue ;
        }
        count++;
        i++;
    }
    printf("%d\n", count);
    return 0;
}