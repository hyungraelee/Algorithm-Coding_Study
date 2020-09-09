#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    char* answer = (char*)malloc(sizeof(char) * ((n * 3) + 1));
    for (int i = 0 ; i < n * 3 ; i++)
        answer[i] = 0;

    int i;
    for (i = 0 ; i < n * 3 ; i += 3)
    {
        if (i % 6 == 0)
            strcat(answer, "¼ö");
        else if (i % 6 == 3)
            strcat(answer, "¹Ú");
    }
    answer[i] = 0;
    
    return answer;
}