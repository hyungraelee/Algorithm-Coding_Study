#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, temp;
    scanf("%d", &n);
    int *numArr = (int *)malloc(sizeof(int) * n);
    for (int i = 0 ; i < n ; i++)
        scanf("%d", &numArr[i]);

    for (int i = 0 ; i < n - 1 ; i++)
    {
        for (int j = 0 ; j < n - i - 1 ; j++)
        {
            if (numArr[j] > numArr[j + 1])
            {
                temp = numArr[j];
                numArr[j] = numArr[j + 1];
                numArr[j + 1] = temp;
            }
        }
    }

    for (int i = 0 ; i < n ; i++)
    {
        printf("%d\n", numArr[i]);
    }

    free(numArr);

    return 0;
}