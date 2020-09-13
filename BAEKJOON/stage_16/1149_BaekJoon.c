#include <stdio.h>
#include <stdlib.h>

int MIN(int a, int b)
{
    return (a < b ? a : b);
}

int dp[1000][3];

int main()
{
    int n;
    scanf("%d", &n);
    scanf("%d %d %d", &dp[0][0], &dp[0][1], &dp[0][2]); // 1��° �� RGB��� �ʱ�ȭ.
    for (int i = 1 ; i < n ; i++)
    {
        int red, green, blue;
        scanf("%d %d %d", &red, &green, &blue);         // 2��° �� ���� dp�� �̿���
        dp[i][0] = MIN(dp[i-1][1], dp[i-1][2]) + red;   // i��° R + i-1��° G,B�� ���� �� ��� �� ���� ��,
        dp[i][1] = MIN(dp[i-1][0], dp[i-1][2]) + green; // i��° G + i-1��° R,B�� ���� �� ��� �� ���� ��,
        dp[i][2] = MIN(dp[i-1][0], dp[i-1][1]) + blue;  // i��° B + i-1��° R,G�� ���� �� ��� �� ���� ���� ����.
    }
    printf("%d\n", MIN(dp[n-1][0], MIN(dp[n-1][1], dp[n-1][2])));

    return 0;   
}

/*
i��° ���� ĥ�ϴ� ���� i-1, i+1��° ĥ �� ���� �޶�� �ϸ�,
i��°���� ĥ�� ����� �ּҿ��� �Ѵ�.

i��°�� ĥ�ϴ� �� ������ ��� ����, i-1��°���� ĥ�� �ּ� ����� ���ذ��� ���� �ذ�.
*/