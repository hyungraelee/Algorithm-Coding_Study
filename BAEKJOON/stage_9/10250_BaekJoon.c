#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);
    int h[t], w[t], n[t];
    for (int i = 0 ; i < t ; i++)
    {
        scanf("%d %d %d", &h[i], &w[i], &n[i]);
    }
    for (int i = 0 ; i < t ; i++)
    {
        if (n[i] % h[i] == 0 && n[i] / h[i] < 10)
            printf("%d0%d\n", h[i], n[i] / h[i]);
        else if (n[i] % h[i] == 0 && n[i] / h[i] >= 10)
            printf("%d%d\n", h[i], n[i] / h[i]);
        else if (n[i] % h[i] != 0 && n[i] / h[i] + 1 < 10)
            printf("%d0%d\n", n[i] % h[i], (n[i] / h[i]) + 1);
        else
            printf("%d%d\n", n[i] % h[i], (n[i] / h[i]) + 1);
    }
    return 0;
}