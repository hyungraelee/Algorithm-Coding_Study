#include <stdio.h>
#include <stdlib.h>

void quickSort(int *, int, int);

int main()
{
    int n;
    scanf("%d", &n);
    int *data = (int *)malloc(sizeof(int) * n);
    for (int i = 0 ; i < n ; i++)
        scanf("%d", &data[i]);

    quickSort(data, 0, n - 1);

    for (int i = 0 ; i < n ; i++)
        printf("%d\n", data[i]);

    free(data);
    return 0;
}

void quickSort(int *data, int start, int end)
{
    if (start >= end)   // 종료조건
        return ;        // 원소가 1개이거나, 새로운 피봇이 분할 정렬 된 배열의 한쪽 끝 인 경우(피봇의 어느 한쪽이 공집합인 경우)
    
    int pivot = start;
    int i = pivot + 1;  // 왼쪽 출발 인덱스
    int j = end;        // 오른쪽 출발 인덱스
    int temp;

    while (i <= j)      // 포인터가 엇갈릴 때 까지 반복.
    {
        while (i <= end && data[i] <= data[pivot])
            i++;        // pivot값 보다 큰 값을 만날때 까지 i증가
        while (j > start && data[j] >= data[pivot])
            j--;        // pivot값 보다 작은 값을 만날때 까지 j감소

                    // data[i] > data[pivot] 이고, data[j] < data[pivot] 인 상태
        
        if (i > j)      // 엇갈린 경우 j번째(새로운 피봇)를 기준으로 왼쪽은 작은 값, 오른쪽은 큰값.
        {
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        }
        else            // 엇갈리지 않은 경우 i번째와 j번째 스왑 후, 엇갈릴 때 까지 반복.
        {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    quickSort(data, start, j - 1);  // 새로운 피봇 왼쪽 분할 정복
    quickSort(data, j + 1, end);    // 새로운 피봇 오른쪽 분할 정복

}

//quick sort 알고리즘을 직접 구현해서 풀어봄.