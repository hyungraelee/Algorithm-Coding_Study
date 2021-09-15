#include <stdio.h>

int fibonacci(int);
int f_num[1000000];

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n+1));
    return 0;
}

int fibonacci(int n)
{
    f_num[0] = 0;
    f_num[1] = 1;
    for (int i = 2 ; i <= n ; i++)
    {
        f_num[i] = (f_num[i - 2] + f_num[i - 1]) % 15746;
    }
    return f_num[n];
}

/*
N = 1 -> 1��
N = 2 -> 2��
N = 3 -> 3��
N = 4 -> 5��
N = 5 -> 8�� ��
�Ǻ���ġ ���� ��Ģ���� (N+1 ��° �� % 15746)�� ����Ѵ�.
*/