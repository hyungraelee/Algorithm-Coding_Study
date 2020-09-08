#include <stdio.h>

int find_max(int a, int b, int c)
{
    int max = a;

    if (max < b || max < c)
    {
        max = b;
        if (max < c)
            max = c;
    }
    return max;
}

int is_right_angle(int a, int b, int c)
{
    int max;
    
    max = find_max(a, b, c);
    if (a == max)
    {
        if (a * a == b * b + c * c)
            return 1;
    }
    if (b == max)
    {
        if (b * b == a * a + c * c)
            return 1;
    }
    if (c == max)
    {
        if (c * c == a * a + b * b)
            return 1;
    }
    return 0;
}

int main()
{
    int a, b, c;

    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
            break ;
        if (is_right_angle(a, b, c))
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}