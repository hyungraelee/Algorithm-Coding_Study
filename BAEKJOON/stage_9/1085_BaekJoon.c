#include <stdio.h>

int min(int x, int y, int w, int h)
{
    int ans = x;
    if (ans > y || ans > w || ans > h)
    {
        ans = y;
        if (ans > w || ans > h)
        {
            ans = w;
            if (ans > h)
                ans = h;
        }
    }
    return ans;
}

int main()
{
    int x, y, w, h;

    scanf("%d %d %d %d", &x, &y, &w, &h);
    printf("%d\n", min(x, y, w-x, h-y));

    return 0;
}