#include <stdio.h>
#include <math.h>

float distance_center(int x1, int y1, int x2, int y2);
int difference_r(int r1, int r2);

int main()
{
    int times;

    scanf("%d", &times);
    for (int t = 0 ; t < times ; t++)
    {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        float distance = distance_center(x1, y1, x2, y2);
        int sum_r = r1 + r2;
        int diff_r = difference_r(r1, r2);
        if (x1 == x2 && y1 == y2)
        {
            if (r1 == r2)
                printf("-1\n");
            else
                printf("0\n");
        }
        else if (distance == sum_r || distance == diff_r)
            printf("1\n");
        else if (distance < diff_r || distance > sum_r)
            printf("0\n");
        else if (distance > diff_r || distance < sum_r)
            printf("2\n");
    }

    return 0;
}

float distance_center(int x1, int y1, int x2, int y2)
{
    float res;

    res = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    return res;
}

int difference_r(int r1, int r2)
{
    if (r1 > r2)
        return (r1 - r2);
    else
        return (r2 - r1);
}