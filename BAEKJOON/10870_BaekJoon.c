#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", fibonacci(n));

    return 0;
}

int fibonacci(int n)
{
    if (n == 1)
        return 1;
    else if (n == 0)
        return 0;
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}