#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare_up(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    
    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}

int compare_down(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    
    if (num1 < num2)
        return 1;
    if (num1 > num2)
        return -1;
    return 0;
}

int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    
    qsort(A, A_len, sizeof(int), compare_up);
    qsort(B, B_len, sizeof(int), compare_down);
    
    for (int i = 0 ; i < A_len ; i++)
        answer += (A[i] * B[i]);
    
    return answer;
}