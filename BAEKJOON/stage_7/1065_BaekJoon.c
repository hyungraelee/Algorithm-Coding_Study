#include <stdio.h>

int is_hannum(int num)
{
    if (num == 1000)
        return 0;
    if ((num / 100) - ((num / 10) % 10) == ((num / 10) % 10) - (num % 10))
        return 1;
    return 0;
}

int main()
{
    int n, cnt = 0;

    scanf("%d", &n);
    if (n <= 99)
        printf("%d\n", n);
    else
    {
        cnt = 99;
        for (int i = 100 ; i <= n ; i++)
        {
            if (is_hannum(i))
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}