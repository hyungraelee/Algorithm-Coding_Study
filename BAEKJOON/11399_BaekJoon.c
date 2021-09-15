#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0, sum2 = 0;
    
    scanf("%d", &n);

    int *time;
    time = (int *)malloc(sizeof(int) * n);
    
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &time[i]);
    }

    for (int i = 0 ; i < n - 1 ; i++)
    {
        for (int j = 0 ; j < n - i - 1 ; j++)
        {
            int temp;
            if (time[j] > time[j + 1])
            {
                temp = time[j];
                time[j] = time[j + 1];
                time[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0 ; i < n ; i++)
    {
        sum += time[i];
        sum2 += sum;
    }

    printf("%d\n", sum2);
    

    free(time);
    return 0;
}