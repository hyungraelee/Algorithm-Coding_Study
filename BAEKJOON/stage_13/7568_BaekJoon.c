#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ranking;
    scanf("%d", &n);
    int **wh = (int **)malloc(sizeof(int *) * n);
    int *rank = (int *)malloc(sizeof(int) * n);
    for (int i = 0 ; i < n ; i++)
    {
        wh[i] = (int *)malloc(sizeof(int) * 2);
        scanf("%d %d", &wh[i][0], &wh[i][1]);
    }

    for (int i = 0 ; i < n ; i++)
    {
        ranking = 1;
        for (int j = 0 ; j < n ; j++)
        {
            if (wh[i][0] < wh[j][0] && wh[i][1] < wh[j][1])
                ranking++;
        }
        rank[i] = ranking;
    }

    for (int i = 0 ; i < n ; i++)
        printf("%d ", rank[i]);

    printf("\n");

    free(rank);
    for (int i = 0 ; i < n ; i ++)
        free(wh[i]);
    free(wh);

    return 0;
}