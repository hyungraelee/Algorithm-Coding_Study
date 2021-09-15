#include <stdio.h>
#define MAX(a,b) (a>b?a:b)

int dp[501][501];

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i++)      // ���Ǹ� ���� index = 0 �� ��, ���� ��Ҵ� ����.
        for (int j = 1 ; j <= i ; j++)
            scanf("%d", &dp[i][j]);

    for (int i = n - 1 ; i >= 1 ; i--)
        for (int j = 1 ; j <= i ; j++)
            dp[i][j] += MAX(dp[i+1][j], dp[i+1][j+1]);  // �ﰢ���� ���� �� �� ���� �� �� ū ���� ������ ���� ���� ���Ͽ� �ʱ�ȭ.

    printf("%d\n", dp[1][1]);

    return 0;
}
