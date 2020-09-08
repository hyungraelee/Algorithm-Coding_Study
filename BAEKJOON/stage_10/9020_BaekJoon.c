#include <stdio.h>

int isPrime(int);

int main()
{
    int arr[10000] = {0, }, T;
    arr[2] = 1; arr[3] = 1;
    for (int i = 4 ; i < 9999 ; i++)
    {
        if (isPrime(i))
        {
            arr[i] = 1;
        }
    }
    scanf("%d", &T);
    for (int t = 0 ; t < T ; t++)
    {
        int n;
        scanf("%d", &n);
        if (arr[n / 2] == 1)
            printf("%d %d\n", n/2, n/2);
        else
        {
            for (int i = (n / 2) - 1 ; ; i--)
            {
                if (arr[i] == 1)
                {
                    if (arr[n - i] == 1)
                    {
                        printf("%d %d\n", i, n - i);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}

int isPrime(int a)
{
    if (a % 2 == 0)
        return 0;
    if (a % 3 == 0)
        return 0;
    for (int i = 2 ; i < a / 2 ; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}