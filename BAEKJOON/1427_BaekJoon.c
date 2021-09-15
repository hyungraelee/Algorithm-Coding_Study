#include <stdio.h>

int num[10];

int main()
{
    int n;
    scanf("%d", &n);
    while (n != 0)
    {
        num[n%10]++;
        n /= 10;
    }

    for (int i = 9 ; i >= 0 ; i--)
    {
        if (num[i] != 0)
        {
            for (int j = 0 ; j < num[i] ; j++)
            {
                printf("%d", i);
            }
        }
    }

    return 0;   
}