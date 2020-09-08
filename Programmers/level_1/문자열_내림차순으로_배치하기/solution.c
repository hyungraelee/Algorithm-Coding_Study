#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int len;
    len = strlen(s); //input 문자열 길이
    char* answer = (char*)malloc(sizeof(char) * (len + 1)); //문자열 길이 + NULL만큼 동적할당
    strcpy(answer, s);
    char temp;
    for (int i = 0 ; i < len ; i++)
    {
        for (int j = 0 ; j < len - i - 1 ; j++)
        {
            if (answer[j] < answer[j + 1])
            {
                temp = answer[j];
                answer[j] = answer[j + 1];
                answer[j + 1] = temp;
            }
        }
    }
    answer[len + 1] = 0;

    return answer;
}