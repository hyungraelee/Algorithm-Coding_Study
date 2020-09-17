#include <stdio.h>
#define MAX(a,b) (a>b?a:b)

int dp[501][501];

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i++)      // 편의를 위해 index = 0 인 행, 열의 요소는 제외.
        for (int j = 1 ; j <= i ; j++)
            scanf("%d", &dp[i][j]);

    for (int i = n - 1 ; i >= 1 ; i--)
        for (int j = 1 ; j <= i ; j++)
            dp[i][j] += MAX(dp[i+1][j], dp[i+1][j+1]);  // 삼각형의 제일 밑 줄 부터 둘 중 큰 값을 선택해 위의 값과 더하여 초기화.

    printf("%d\n", dp[1][1]);

    return 0;
}
