#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int len, index = 0, i = 0;
    len = strlen(s);
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    
    for (i = 0 ; i < len ; i++)
    {
        if (s[i] == ' ')
        {
            index = 0;
            answer[i] = ' ';
            continue ;
        }
        if (index % 2 == 0)
            answer[i] = (s[i] >= 'a' && s[i] <= 'z') ? s[i] - 'a' + 'A' : s[i];
        else
            answer[i] = (s[i] >= 'a' && s[i] <= 'z') ? s[i] : s[i] - 'A' + 'a';
        index++;
    }
    answer[i] = 0;
    
    return answer;
}