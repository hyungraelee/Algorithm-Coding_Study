#include <stdio.h>

int main()
{
    int a_x, a_y, b_x, b_y, c_x, c_y, d_x = 0, d_y = 0;
    
    scanf("%d %d", &a_x, &a_y);
    scanf("%d %d", &b_x, &b_y);
    scanf("%d %d", &c_x, &c_y);

    if (a_x == b_x)
    {
        d_x = c_x;
        if (a_y == c_y)
            d_y = b_y;
        else
            d_y = a_y;
    }
    else if (a_x == c_x)
    {
        d_x = b_x;
        if (a_y == b_y)
            d_y = c_y;
        else
            d_y = a_y;
        
    }
    else if (b_x == c_x)
    {
        d_x = a_x;
        if (b_y == a_y)
            d_y = c_y;
        else
            d_y = b_y;
    }
    printf("%d %d\n", d_x, d_y);
    return 0;
}