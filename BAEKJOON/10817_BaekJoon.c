#include <stdio.h>

int main()
{
    int num[3], temp;

    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 - i - 1 ; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    printf("%d\n", num[1]);
    return 0;
}