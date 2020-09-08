#include <stdio.h>

int is_prime(int num)
{
    if (num == 1)
        return 0;
    for (int i = 2 ; i <= (num / 2) ; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{   
    int n, cnt = 0;

    scanf("%d", &n);
    for (int i = 0 ; i < n ; i++)
    {
        int num;

        scanf("%d", &num);
        if (is_prime(num))
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}