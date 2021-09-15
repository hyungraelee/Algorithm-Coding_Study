#include <stdio.h>

int main()
{
    int times;

    scanf("%d", &times);
    for (int t = 0 ; t < times ; t++)
    {
        int floor, num;

        scanf("%d %d", &floor, &num);
        int apartment[floor + 1][num];
        for (int f = 0 ; f < num ; f++)
        {
            apartment[0][f] = f + 1;
        }
        for (int n = 0 ; n < num ; n++)
        {
            for (int f = 1 ; f <= floor ; f++)
            {
                if (n == 0)
                    apartment[f][n] = 1;
                else
                    apartment[f][n] = apartment[f][n - 1] + apartment[f - 1][n];
            }
        }
        printf("%d\n", apartment[floor][num - 1]);
    }
    return 0;
}