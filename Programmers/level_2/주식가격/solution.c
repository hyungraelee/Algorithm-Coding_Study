#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int prices[], size_t prices_len) {
    int* answer = (int*)malloc(sizeof(int) * prices_len);
    for (int i = 0 ; i < prices_len ; i++)
        answer[i] = 0;
    for (int i = 0 ; i < prices_len ; i++)
    {
        int cnt = 0;
        for (int j = i + 1 ; j < prices_len ; j++)
        {
            cnt++;
            if (prices[i] > prices[j])
                break;
        }
        answer[i] = cnt;
    }
    return answer;
}