#include <stdio.h>

int main()
{
    char str[101] = {0,};
    int len = 0;
    int j;
    scanf("%s", str);
    while (str[len] != 0)
    {
        len++;
    }
    for (char i = 'a' ; i <= 'z' ; i++)
    {
        j = 0;
        while (j < len)
        {
            if (i == str[j])
            {
                printf("%d", j);
                break ;
            }
            j++;
        }
        if (j == len)
            printf("-1");
        printf(" ");
    }
    return 0;
}