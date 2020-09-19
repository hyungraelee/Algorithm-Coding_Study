#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int nums[], size_t nums_len) {
    int answer = 0, sum = 0;

    for (int i = 0 ; i < nums_len - 2 ; i++)
    {
        for (int j = i + 1 ; j < nums_len - 1 ; j++)
        {
            for (int k = j + 1 ; k < nums_len ; k++)
            {
                sum = nums[i] + nums[j] + nums[k];
                if (sum % 2 == 0)
                    continue ;
                int n;
                for (n = 3 ; n < sum / 2 ; n++)
                {
                    if (sum % n == 0)
                        break ;
                }
                if (n == sum / 2)
                    answer++;
            }
        }
    }

    return answer;
}