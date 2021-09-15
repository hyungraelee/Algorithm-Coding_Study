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
        sum += data[i];         // 입력되는 수의 총 합.
        count[data[i] + 4000]++;  // -4000 -> 0번 인덱스, 0 -> 4000번 인덱스, 4000 -> 8000번 인덱스
    }

    get_mean(sum, n);           // 산술평균 구하고 출력.
    get_median(n);              // 중앙값 구하고 출력.
    get_mode();                 // 최빈값 구하고 출력.
    get_range();                // 범위 구하고 출력.

    free(data);

    return 0;
}

void get_mean(int sum, int n)   // 산술평균 (소수점 이하 첫째 자리에서 반올림)
{
    int result, temp;
    float mean;
    mean = (float)sum / n;
    result = mean;              // int형 result로 대입하여 소수점 이하 일단 버림.
    temp = mean * 10;
    if (mean >= 0 && temp % 10 > 4)             // 양수이고 소수점 이하 첫째 자리가 5~9 이면 
        result++;               // 올림.
    else if (mean < 0 && ABS(temp) % 10 > 4)    // 음수이고 소수점 이하 첫째 자리가 5~9 이면 
        result--;               // 내림.

    printf("%d\n", result);

    return ;
}

void get_median(int n)          // 중앙값
{
    int i, cnt = 0;

    for (i = 0 ; i <= 8000 ; i++)
    {
        if (count[i] != 0)
        {
            cnt += count[i];    // input 갯수가 n/2가 될때까지 cnt 더함.
            if (cnt > n / 2)
                break ;
        }
    }

    printf("%d\n", i - 4000);

    return ;
}

void get_mode(void)                 // 최빈값 (2개 이상이면 2번째로 작은 수)
{
    int max = 0, max_cnt = 0, max_index;
    
    for (int i = 0 ; i <= 8000 ; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            max_index = i;      // max개인 숫자 기억
            max_cnt = 1;        // 들어온 갯수가 max개 인 숫자의 개수
        }
        else if (count[i] != 0 && count[i] == max)  // max개 이상 들어온 숫자가 2개 이상인지 체크
        {
            max_cnt++;
        }
    }

    if (max_cnt == 1)                               // 최빈값이 1개인 경우
        printf("%d\n", max_index - 4000);
    else                                            // 최빈값이 2개 이상인 경우
    {
        for (int i = max_index + 1 ; i <= 8000 ; i++)   // 최빈&최솟값 다음 수 부터 시작.
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

void get_range(void)                    // 범위
{
    int min, max;
    for (int i = 0 ; i <= 8000 ; i++)   // 앞에부터 최솟값 찾기
    {
        if (count[i] != 0)
        {
            min = i - 4000;
            break ;
        }
    }
    for (int i = 8000 ; i >= 0 ; i--)   // 뒤에부터 최댓값 찾기
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