#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    char *num;


    scanf("%d", &n);
    if (!(num = (char *)malloc(sizeof(char) * n + 1)))
        return 0;
    scanf("%s", num);

    for (int i = 0 ; i < n ; i++)
    {
        sum = sum + (num[i] - '0');
    }

    printf("%d\n", sum);

    free(num);
    return 0;
}