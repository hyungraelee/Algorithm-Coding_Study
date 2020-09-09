#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(const char* s) {
    bool answer = true;
    int len, i = 0;
    len = strlen(s);
    
    if (len == 4)
    {
        while (s[i])
        {
            if(!(s[i] >= '0' && s[i] <= '9'))
                break;
            i++;
        }
        answer = (i == 4) ? true : false;
    }
    else
    {
        while (s[i])
        {
            if(!(s[i] >= '0' && s[i] <= '9'))
                break;
            i++;
        }
        answer = (i == 6) ? true : false;
    }
    return answer;
}