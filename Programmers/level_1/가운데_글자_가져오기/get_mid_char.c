#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int len = strlen(s);
    char* answer = (char*)malloc(sizeof(char) * 3);
    if (len % 2 != 0)
    {
        answer[0] = s[len / 2]; answer[1] = 0;
    }
    else if (len % 2 == 0)
    {

        answer[0] = s[len / 2 - 1] ; answer[1] = s[len / 2]; answer[2] = 0;
    }

    return answer;
}