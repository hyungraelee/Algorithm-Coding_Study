#include <stdio.h>

int main()
{
    int n, i, sum, temp;
    scanf("%d", &n);

    for (i = 1 ; i < n ; i++)
    {
        sum = i;
        temp = i;
        while (temp != 0)
        {
            sum += (temp % 10);
            temp /= 10;
        }
        if (sum == n)
            break ;
    }
    if (i == n)
        printf("0\n");
    else
        printf("%d\n", i);

    return 0;
}