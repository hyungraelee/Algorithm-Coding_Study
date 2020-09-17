#include <stdio.h>

int main()
{
    int times;

    scanf("%d", &times);
    for (int t = 0 ; t < times ; t++)
    {
        int x, y, total, cnt;

        scanf("%d %d", &x, &y);
        total = y - x;
        cnt = 0;
        for (int i = 1 ; total > 0 ; i++)
        {
            if (total <= i)
            {
                cnt++;
                break;
            }
            total -= (i * 2);
            cnt += 2;
        }
        printf("%d\n", cnt);
    }

    return 0;
}