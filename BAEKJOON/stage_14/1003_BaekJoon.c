#include <stdio.h>

int fibonacci(int n);
int f_num[41] = {0, 1,};
// n = 2 �� �Էµ� �� f_num[1] = 1�� ���� ���� �ʴ� ��츦 ���� �Ǻ���ġ �պκ� �̸� �ʱ�ȭ.

int main()
{
    int times;
    scanf("%d", &times);
    for (int i = 0 ; i < times ; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0) // n == 0 �� ���, f_num[n - 1] �� ���� �ε����� ����Ű�� ������, ���� �ذ�.
        {
            printf("1 0\n");
            continue ;
        }
        f_num[n] = fibonacci(n);
        printf("%d %d\n", f_num[n - 1], f_num[n]);
    }
    return 0;
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (f_num[n] != 0)
        return f_num[n];
        
    f_num[n] = fibonacci(n - 2) + fibonacci(n - 1);
    return f_num[n];
}

/*
0 ȣ�� Ƚ���� 1, 0, 1, 1, 2, 3, 5 ... �� 1, �Ǻ���ġ ~
1 ȣ�� Ƚ���� 0, 1, 1, 2, 3, 5, 8 ... �� �Ǻ���ġ ������.
*/