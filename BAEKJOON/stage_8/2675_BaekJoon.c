#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, j;
    int *re;
    char **str;

    scanf ("%d", &t);
    if (!(re = (int *)malloc(sizeof(int) * t)))
        return 0;
    if (!(str = (char **)malloc(sizeof(char *) * t)))
        return 0;
    for (int i = 0 ; i < t ; i++)
    {
        str[i] = (char *)malloc(sizeof(char) * 21);
    }

    for (int i = 0 ; i < t ; i++)
        scanf("%d %s", &re[i], str[i]);

    for (int i = 0 ; i < t ; i++)
    {
        j = 0;
        while (str[i][j])
        {
            for (int k = 0 ; k < re[i] ; k++)
                printf("%c",str[i][j]);
            j++;
        }
        printf("\n");
    }
    for (int i = 0 ; i < t ; i++)
        free(str[i]);
    free(str);
    free(re);
    return 0;
}