#include <stdio.h>

int fibonacci(int n);
int f_num[41] = {0, 1,};
// n = 2 가 입력될 때 f_num[1] = 1의 값이 들어가지 않는 경우를 위해 피보나치 앞부분 미리 초기화.

int main()
{
    int times;
    scanf("%d", &times);
    for (int i = 0 ; i < times ; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0) // n == 0 인 경우, f_num[n - 1] 이 음수 인덱스를 가리키기 때문에, 따로 해결.
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
0 호출 횟수는 1, 0, 1, 1, 2, 3, 5 ... 로 1, 피보나치 ~
1 호출 횟수는 0, 1, 1, 2, 3, 5, 8 ... 로 피보나치 수열임.
*/