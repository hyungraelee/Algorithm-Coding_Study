#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    int len = 0;
    long long temp = n;
    while (temp != 0)
    {
        temp /= 10;
        len++;
    }
    int* answer = (int*)malloc(sizeof(int) * len);
    for (int i = 0 ; i < len ; i++)
    {
        answer[i] = n % 10;
        n /= 10;
    }

    return answer;
}