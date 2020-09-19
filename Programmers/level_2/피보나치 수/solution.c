#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int *fibonacci = (int *)malloc(sizeof(int) * (n+1));
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2 ; i <= n ; i++)
        fibonacci[i] = (fibonacci[i-2] + fibonacci[i-1]) % 1234567;
    answer = fibonacci[n];
    free(fibonacci);
    return answer;
}