#include <stdio.h>

int main()
{
    int sugar, cnt_five, cnt_three, i, j;

    scanf("%d", &sugar);
    cnt_five = sugar / 5;
    cnt_three = sugar / 3;
    for (i = cnt_five ; i >= 0 ; i--)
    {
        for (j = 0 ; j <= cnt_three ; j++)
        {
            if (sugar == 5 * i + 3 * j)
            {
                printf("%d\n", i + j);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}