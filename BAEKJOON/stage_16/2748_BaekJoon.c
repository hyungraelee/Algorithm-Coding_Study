#include <stdio.h>

long long fibonacci(int n);
long long f_num[91];

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld\n", fibonacci(n));
    return 0;
}

long long fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (f_num[n] != 0)
        return f_num[n];
    f_num[n] = fibonacci(n - 2) + fibonacci(n - 1);
    return f_num[n];
}