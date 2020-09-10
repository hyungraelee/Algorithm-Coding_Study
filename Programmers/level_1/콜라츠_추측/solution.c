#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    long long num1 = num;
    while (num1 != 1)
    {
        if (answer > 500)
            return -1;
        answer++;
        num1 = (num1 % 2 == 0) ? num1 / 2 : (num1 * 3) + 1;
    }
    return answer;
}
