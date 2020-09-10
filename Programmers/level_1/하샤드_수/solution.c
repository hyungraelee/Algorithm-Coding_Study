#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int sum = 0; // 각 자리의 합
    int temp = x;
    while (temp != 0){
        sum += temp % 10;
        temp /= 10;
    }
    answer = (x % sum == 0) ? true : false;
    return answer;
}
