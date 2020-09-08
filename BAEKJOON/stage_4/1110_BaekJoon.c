#include <stdio.h>

int main()
{
    int num, temp, count = 0;

    scanf("%d", &num);
    temp = num;
    while (1)
    {
        num = ((num % 10) * 10) + (((num / 10) + (num % 10)) % 10);
        count++;
        if (num == temp)
            break ;
    }
    printf("%d\n", count);
    return 0;
}