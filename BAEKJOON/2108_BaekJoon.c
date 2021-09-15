#include <stdio.h>
#include <stdlib.h>
#define ABS(a) (a >= 0 ? a : a*(-1))

void get_mean(int, int);
void get_median(int);
void get_mode(void);
void get_range(void);

int count[8001];

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int *data = (int *)malloc(sizeof(int) * n);
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &data[i]);
        sum += data[i];         // �ԷµǴ� ���� �� ��.
        count[data[i] + 4000]++;  // -4000 -> 0�� �ε���, 0 -> 4000�� �ε���, 4000 -> 8000�� �ε���
    }

    get_mean(sum, n);           // ������ ���ϰ� ���.
    get_median(n);              // �߾Ӱ� ���ϰ� ���.
    get_mode();                 // �ֺ� ���ϰ� ���.
    get_range();                // ���� ���ϰ� ���.

    free(data);

    return 0;
}

void get_mean(int sum, int n)   // ������ (�Ҽ��� ���� ù° �ڸ����� �ݿø�)
{
    int result, temp;
    float mean;
    mean = (float)sum / n;
    result = mean;              // int�� result�� �����Ͽ� �Ҽ��� ���� �ϴ� ����.
    temp = mean * 10;
    if (mean >= 0 && temp % 10 > 4)             // ����̰� �Ҽ��� ���� ù° �ڸ��� 5~9 �̸� 
        result++;               // �ø�.
    else if (mean < 0 && ABS(temp) % 10 > 4)    // �����̰� �Ҽ��� ���� ù° �ڸ��� 5~9 �̸� 
        result--;               // ����.

    printf("%d\n", result);

    return ;
}

void get_median(int n)          // �߾Ӱ�
{
    int i, cnt = 0;

    for (i = 0 ; i <= 8000 ; i++)
    {
        if (count[i] != 0)
        {
            cnt += count[i];    // input ������ n/2�� �ɶ����� cnt ����.
            if (cnt > n / 2)
                break ;
        }
    }

    printf("%d\n", i - 4000);

    return ;
}

void get_mode(void)                 // �ֺ� (2�� �̻��̸� 2��°�� ���� ��)
{
    int max = 0, max_cnt = 0, max_index;
    
    for (int i = 0 ; i <= 8000 ; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            max_index = i;      // max���� ���� ���
            max_cnt = 1;        // ���� ������ max�� �� ������ ����
        }
        else if (count[i] != 0 && count[i] == max)  // max�� �̻� ���� ���ڰ� 2�� �̻����� üũ
        {
            max_cnt++;
        }
    }

    if (max_cnt == 1)                               // �ֺ��� 1���� ���
        printf("%d\n", max_index - 4000);
    else                                            // �ֺ��� 2�� �̻��� ���
    {
        for (int i = max_index + 1 ; i <= 8000 ; i++)   // �ֺ�&�ּڰ� ���� �� ���� ����.
        {
            if (count[i] == max)
            {
                printf("%d\n", i - 4000);
                break ;
            }
        }
    }
    
    return ;
}

void get_range(void)                    // ����
{
    int min, max;
    for (int i = 0 ; i <= 8000 ; i++)   // �տ����� �ּڰ� ã��
    {
        if (count[i] != 0)
        {
            min = i - 4000;
            break ;
        }
    }
    for (int i = 8000 ; i >= 0 ; i--)   // �ڿ����� �ִ� ã��
    {
        if (count[i] != 0)
        {
            max = i - 4000;
            break ;
        }
    }

    printf("%d\n", max - min);

    return ;
}