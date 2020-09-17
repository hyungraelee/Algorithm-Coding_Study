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
    if (start < end)    // 2�� �̻��� ������Ʈ�� �������������� ��� ����
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);     // ���� ����
        mergeSort(arr, mid + 1, end);   // ���� ����
        merge(arr, start, mid, end);
    }
}

void merge(int *arr, int start, int mid, int end)
{
    int i = start;      // ���ʹ迭 ���� �ε���
    int j = mid + 1;    // ������ �迭 ���� �ε���
    int k = start;      // sorted �迭 �ε����� ���.

    while (i <= mid && j <= end)    // ���� �迭 ��� merge�Ϸ� ���� ���� ����.
    {
        if (arr[i] <= arr[j])       // ���� �迭 ���� ������
        {
            sorted[k] = arr[i];     // ���� �迭 �� �ְ�
            i++;                    // ���� �迭�� �ε��� ����
        }
        else                        // ������ �迭 ���� ������
        {
            sorted[k] = arr[j];     // ������ �迭 �� �ְ�
            j++;                    // ������ �迭�� �ε��� ����
        }
        k++;
    }
    if (i > mid)                            // ���� �迭 ���� ���� �Ϸ� �Ǹ�,
    {
        for (int t = j ; t <= end ; t++)
        {
            sorted[k] = arr[t];             // sorted �迭�� ������ �迭�� ���� ���ҵ� �־���.
            k++;
        }
    }
    else                                    // ������ �迭 ���� ���� �Ϸ� �Ǹ�,
    {
        for (int t = i ; t <= mid ; t++)
        {
            sorted[k] = arr[t];             // sorted �迭�� ���� �迭�� ���� ���ҵ� �־���.
            k++;
        }
    }

    for (int t = start ; t <= end ; t++)
    {
        arr[t] = sorted[t];                 // ���ĵ� �迭�� ����, ���� �� arr�迭�� ��ͷ� ���ư�.
    }
}

/*
    mergesort �̿��Ͽ� Ǯ��.
*/