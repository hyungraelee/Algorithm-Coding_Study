#include <stdio.h>

int check_error(int *, int);

int main()
{
    int n, price, cnt = 0;
    scanf("%d %d", &n, &price);

    int coin[n];
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &coin[i]);
    }

    if (!(check_error(coin, n)))
        return 1;

    for (int i = n - 1 ; i >= 0 ; i--)
    {
        while (coin[i] <= price)
        {
            price -= coin[i];
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}

int check_error(int *coin, int n)
{
    int i;

    if (*coin != 1)
        return 0;
    for (i = 0 ; i < n - 1 ; i++)
    {
        if (coin[i + 1] % coin[i] != 0)
            break ;
    }
    if (i != n - 1)
        return 0;
    return 1;
}