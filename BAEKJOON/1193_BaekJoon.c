#include <stdio.h>

int main()
{
    int num, row = 1, col = 1, i = 1;

    scanf("%d", &num);
    while (1)
    {
        if (num <= i)
            break ;
        num -= i;
        row++;
        col++;
        i++;
    }
    if (i % 2 != 0)
    {
        col = 1;
        for (int k = 0 ; k < num - 1 ; k++)
        {
            row--;
            col++;
        }
    }
    else
    {
        row = 1;
        for (int k = 0 ; k < num - 1 ; k++)
        {
            row++;
            col--;
        }
    }
    printf("%d/%d\n", row, col);
    return 0;
}