#include <stdio.h>

int main()
{
    char str[16];
    int times[] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    int sum = 0;

    scanf("%s", str);
    for (int i = 0 ; str[i] ; i++)
    {
        sum += times[(int)(str[i] - 'A')];
    }
    printf("%d\n", sum);
    return 0;
}