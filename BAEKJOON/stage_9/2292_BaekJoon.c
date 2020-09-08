#include <stdio.h>

int main()
{
    int num, lim_i, i;

    scanf("%d", &num);
    lim_i = num / 6 + 1;
    num--;
    for (i = 0 ; i < lim_i ; i++)
    {
        num = num - (6 * i);
        if (num <= 0)
            break ;
    }
    printf("%d\n", i + 1);
    return 0;
}