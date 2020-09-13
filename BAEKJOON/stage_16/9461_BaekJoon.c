#include <stdio.h>

long long P[100];

int main()
{
    int test;
    scanf("%d", &test);
    P[0] = 1; P[1] = 1; P[2] = 1;
    for (int t = 0 ; t < test ; t++)
    {
        int n;
        scanf("%d", &n);
        for (int i = 3 ; i < n ; i++)
        {
            P[i] = P[i - 3] + P[i - 2];
        }
        printf("%lld\n", P[n - 1]);
    }
    return 0;
}

/*

파도반 수열은
P(1) = P(2) = P(3) = 1 이고,

(N >= 3 일때,) 
P(N) = P(N-3) + P(N-2) 의 규칙을 갖는다.

*/