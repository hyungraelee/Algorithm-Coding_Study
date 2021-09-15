#include <stdio.h>
#include <stdlib.h>

void mk_asc_order(int **timetable, int num);

int main()
{
    int num, cnt = 1, temp;
    scanf("%d", &num);
    int **timetable = (int **)malloc(sizeof(int *) * num);
    
    for (int i = 0 ; i < num ; i++)
    {
        timetable[i] = (int *)malloc(sizeof(int) * 2);
        scanf("%d %d", &timetable[i][0], &timetable[i][1]);
    }

    mk_asc_order(timetable, num);

    temp = timetable[0][1];
    for (int i = 1 ; i < num ; i++)
    {
        if (timetable[i][0] >= temp)
        {
            cnt++;
            temp = timetable[i][1];
        }
    }
    
    printf("%d\n", cnt);

    return 0;
}

void mk_asc_order(int **timetable, int num) //quick sort�� ���� �� ������ �ð� ���� ��� ���� �ð� �������� ���� �ٽ� ����� ��.
{
    int *temp;

    for (int i = 0 ; i < num - 1 ; i++)
    {
        for (int j = 0 ; j < num - i - 1 ; j++)
        {
            if (timetable[j][1] > timetable[j + 1][1])
            {
                temp = timetable[j];
                timetable[j] = timetable[i + 1];
                timetable[j + 1] = temp;
            }
        }
    }
    return ;
}