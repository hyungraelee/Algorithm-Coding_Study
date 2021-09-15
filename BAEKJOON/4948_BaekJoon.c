#include <stdio.h>

int is_prime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2 ; i * i <= num ; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    while (1)
    {
        int n, cnt = 0;

        scanf("%d", &n);
        if (n == 0)
            break ;
        for (int i = n + 1 ; i <= n * 2 ; i++)
        {
            if (is_prime(i))
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}