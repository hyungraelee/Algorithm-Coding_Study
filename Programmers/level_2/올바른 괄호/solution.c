#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(const char* s) {
    bool answer = true;
    
    int cnt = 0;
    
    for (int i = 0 ; s[i] ; i++)
    {
        if (s[i] == '(')
            cnt++;
        else
            cnt--;
        if (cnt < 0)
            return false;
    }
    
    if (cnt != 0)
        return false;
    
    return answer;
}