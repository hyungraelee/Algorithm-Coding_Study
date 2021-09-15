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
    if (start >= end)   // ��������
        return ;        // ���Ұ� 1���̰ų�, ���ο� �Ǻ��� ���� ���� �� �迭�� ���� �� �� ���(�Ǻ��� ��� ������ �������� ���)
    
    int pivot = start;
    int i = pivot + 1;  // ���� ��� �ε���
    int j = end;        // ������ ��� �ε���
    int temp;

    while (i <= j)      // �����Ͱ� ������ �� ���� �ݺ�.
    {
        while (i <= end && data[i] <= data[pivot])
            i++;        // pivot�� ���� ū ���� ������ ���� i����
        while (j > start && data[j] >= data[pivot])
            j--;        // pivot�� ���� ���� ���� ������ ���� j����

                    // data[i] > data[pivot] �̰�, data[j] < data[pivot] �� ����
        
        if (i > j)      // ������ ��� j��°(���ο� �Ǻ�)�� �������� ������ ���� ��, �������� ū��.
        {
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        }
        else            // �������� ���� ��� i��°�� j��° ���� ��, ������ �� ���� �ݺ�.
        {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    quickSort(data, start, j - 1);  // ���ο� �Ǻ� ���� ���� ����
    quickSort(data, j + 1, end);    // ���ο� �Ǻ� ������ ���� ����

}

//quick sort �˰����� ���� �����ؼ� Ǯ�.