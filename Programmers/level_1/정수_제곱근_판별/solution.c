#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    if ((long long)sqrt(n) * (long long)sqrt(n) != n)
        answer = -1;
    else
    {
        answer = (long long)pow(sqrt(n) + 1, 2);
    }
    return answer;
}
