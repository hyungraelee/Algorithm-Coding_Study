#include <stdio.h>
#include <stdlib.h>

int solution(const char* s) {
    int answer = 0;
    if (s[0] == '-')
    {
        answer = (-1) * atoi(&s[1]);
    }
    else if (s[0] == '+')
    {
        answer = atoi(&s[1]);
    }
    else
    {
        answer = atoi(s);
    }
    return answer;
}