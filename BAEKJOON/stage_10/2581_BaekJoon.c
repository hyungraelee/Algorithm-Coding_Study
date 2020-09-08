#include <stdio.h>

int is_prime(int num);

int main()
{
    int start, end, is_min = 1, min = -1, sum = 0;

    scanf("%d", &start);
    scanf("%d", &end);
    for (int i = start ; i <= end ; i++)
    {
        if (is_prime(i))
        {
            if (is_min)
            {
                min = i;
                is_min = 0;
            }
            sum += i;
        }
    }
    if (sum == 0 & min == -1)
        printf("%d\n", min);
    else
    {
        printf("%d\n", sum);
        printf("%d\n", min);
    }
    
    return 0;
}

int is_prime(int num)
{
    if (num == 1)
        return 0;
    for (int i = 2 ; i <= num / 2 ; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}