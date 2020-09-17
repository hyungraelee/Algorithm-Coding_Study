#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, max = 0, temp;
    scanf("%d %d", &n, &m);
    int *card = (int *)malloc(sizeof(int) * n);
    for (int i = 0 ; i < n ; i++)
        scanf("%d", &card[i]);
    
    for (int i = 0 ; i < n - 2 ; i++)
    {
        for (int j = i + 1 ; j < n - 1 ; j++)
        {
            for (int k = j + 1 ; k < n ; k++)
            {
                temp = card[i] + card[j] + card[k];
                if (temp <= m && temp > max)
                    max = temp;
            }
        }
    }
    printf("%d\n", max);
    free(card);
    return 0;
}