#include <stdio.h>
#include <stdlib.h>
#define MIN(a,b) (a<b?a:b)

int main()
{
    int row, col, cnt_B, cnt_W, min;
    scanf("%d %d", &row, &col);
    min = row * col;
    char **map = (char **)malloc(sizeof(char *) * (row + 1));
    for (int i = 0 ; i < row ; i++)
    {
        map[i] = (char *)malloc(sizeof(char) * (col + 1));
        scanf("%s", map[i]);
    }

    for (int i = 0 ; i < row - 7 ; i++)
    {
        for (int j = 0 ; j < col - 7 ; j++)
        {
            cnt_B = 0;  // 'B로 시작하는 경우'를 만들기 위해 칠하는 경우.(B로 시작하는 경우에서 틀린 색 인 경우)
            cnt_W = 0;  // 'W로 시작하는 경우'를 만들기 위해 칠하는 경우.(W로 시작하는 경우에서 틀린 색 인 경우)
            for (int k = i ; k < i + 8 ; k++)
            {
                for (int l = j ; l < j + 8 ; l++)
                {
                    if ((k + l) % 2 == 0)
                    {
                        if (map[k][l] == 'W')
                            cnt_B++;
                        else
                            cnt_W++;
                    }
                    else
                    {
                        if (map[k][l] == 'B')
                            cnt_B++;
                        else
                            cnt_W++;
                    }
                }
            }
            min = MIN(min, cnt_B);
            min = MIN(min, cnt_W);
        }
    }

    printf("%d\n", min);

    for (int i = 0 ; i < row ; i++)
    {
        free(map[i]);
    }
    free(map);

    return 0;
}