#include <stdio.h>
#include <stdlib.h>

int sorted[1000000];
void mergeSort(int *, int, int);
void merge(int *, int, int, int);

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0 ; i < n ; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, 0, n-1);

    for (int i = 0 ; i < n ; i++)
        printf("%d\n", arr[i]);

    return 0;
}

void mergeSort(int *arr, int start, int end)
{
    if (start < end)    // 2개 이상의 엘리먼트가 남아있을때까진 계속 분할
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);     // 좌측 정렬
        mergeSort(arr, mid + 1, end);   // 우측 정렬
        merge(arr, start, mid, end);
    }
}

void merge(int *arr, int start, int mid, int end)
{
    int i = start;      // 왼쪽배열 시작 인덱스
    int j = mid + 1;    // 오른쪽 배열 시작 인덱스
    int k = start;      // sorted 배열 인덱스로 사용.

    while (i <= mid && j <= end)    // 양쪽 배열 모두 merge완료 되지 않은 상태.
    {
        if (arr[i] <= arr[j])       // 왼쪽 배열 값이 작으면
        {
            sorted[k] = arr[i];     // 왼쪽 배열 값 넣고
            i++;                    // 왼쪽 배열만 인덱스 증가
        }
        else                        // 오른쪽 배열 값이 작으면
        {
            sorted[k] = arr[j];     // 오른쪽 배열 값 넣고
            j++;                    // 오른쪽 배열만 인덱스 증가
        }
        k++;
    }
    if (i > mid)                            // 왼쪽 배열 먼저 정리 완료 되면,
    {
        for (int t = j ; t <= end ; t++)
        {
            sorted[k] = arr[t];             // sorted 배열에 오른쪽 배열의 남은 원소들 넣어줌.
            k++;
        }
    }
    else                                    // 오른쪽 배열 먼저 정리 완료 되면,
    {
        for (int t = i ; t <= mid ; t++)
        {
            sorted[k] = arr[t];             // sorted 배열에 왼족 배열의 남은 원소들 넣어줌.
            k++;
        }
    }

    for (int t = start ; t <= end ; t++)
    {
        arr[t] = sorted[t];                 // 정렬된 배열을 삽입, 정렬 된 arr배열이 재귀로 돌아감.
    }
}

/*
    mergesort 이용하여 풀이.
*/