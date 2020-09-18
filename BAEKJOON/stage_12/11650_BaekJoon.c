#include <stdio.h>
#include <stdlib.h>

typedef struct _point
{
    int x;
    int y;
} point;

void mergeSort(point *p, int start, int end);
void merge(point *p, int start, int mid, int end);

point sorted[100000];

int main()
{
    int n;
    scanf("%d", &n);
    point *p = (point *)malloc(sizeof(point) * n);
    for (int i = 0 ; i < n ; i ++)
    {
        scanf("%d %d", &((p+i)->x), &((p+i)->y));
    }

    mergeSort(p, 0, n - 1);

    for (int i = 0 ; i < n ; i++)
    {
        printf("%d %d\n", p[i].x, p[i].y);
    }

    free(p);
    return 0;
}

void mergeSort(point *p, int start, int end)
{
    if (start < end)
    {
        int mid = (end + start) / 2;
        mergeSort(p, start, mid);
        mergeSort(p, mid+1, end);
        merge(p, start, mid, end);
    }
}

void merge(point *p, int start, int mid, int end)
{
    int i = start, j = mid + 1, k = start;

    while (i <= mid && j <= end)
    {
        if (p[i].x < p[j].x)
        {
            sorted[k] = p[i];
            i++;
        }
        else if (p[i].x == p[j].x)  // 합병 정렬 중 x좌표가 동일할때, y좌표 크기 순으로 정렬 해줘야 함.
        {
            if (p[i].y < p[j].y)    // 왼쪽 배열의 y좌표가 작으면,
            {
                sorted[k] = p[i];   // 왼쪽 배열 넣어줌.
                i++;
            }
            else                    // 오른쪽 배열 y좌표가 작으면,
            {
                sorted[k] = p[j];   // 오른쪽 배열 넣어줌.
                j++;
            }
        }
        else
        {
            sorted[k] = p[j];
            j++;
        }
        k++;
    }

    if (i > mid)
    {
        for (int t = j ; t <= end ; t++)
        {
            sorted[k] = p[t];
            k++;
        }
    }
    else
    {
        for (int t = i ; t <= mid ; t++)
        {
            sorted[k] = p[t];
            k++;
        }   
    }
    
    for (int t = start ; t <= end ; t++)
    {
        p[t] = sorted[t];
    }
}