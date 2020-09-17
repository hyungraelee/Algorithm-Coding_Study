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
    scanf("%d %d %d", &dp[0][0], &dp[0][1], &dp[0][2]); // 1번째 집 RGB비용 초기화.
    for (int i = 1 ; i < n ; i++)
    {
        int red, green, blue;
        scanf("%d %d %d", &red, &green, &blue);         // 2번째 집 부터 dp를 이용해
        dp[i][0] = MIN(dp[i-1][1], dp[i-1][2]) + red;   // i번째 R + i-1번째 G,B에 누적 된 비용 중 작은 값,
        dp[i][1] = MIN(dp[i-1][0], dp[i-1][2]) + green; // i번째 G + i-1번째 R,B에 누적 된 비용 중 작은 값,
        dp[i][2] = MIN(dp[i-1][0], dp[i-1][1]) + blue;  // i번째 B + i-1번째 R,G에 누적 된 비용 중 작은 값을 저장.
    }
    printf("%d\n", MIN(dp[n-1][0], MIN(dp[n-1][1], dp[n-1][2])));

    return 0;   
}

/*
i번째 집에 칠하는 색은 i-1, i+1번째 칠 한 색과 달라야 하며,
i번째까지 칠한 비용이 최소여야 한다.

i번째에 칠하는 각 색상의 경우 마다, i-1번째까지 칠한 최소 비용을 더해가며 문제 해결.
*/