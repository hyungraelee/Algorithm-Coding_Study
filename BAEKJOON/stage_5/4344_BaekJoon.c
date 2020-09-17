#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);
    for (int i = 0 ; i < t ; i++)
    {
        int num, sum = 0, cnt = 0;
        double avg = 0, ans = 0;
        scanf("%d", &num);
        
        int arr[num];
        for (int j = 0 ; j < num ; j++)
        {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        avg = (double)sum / num;
        for (int j = 0 ; j < num ; j++)
        {
            if ((double)arr[j] > avg)
                cnt++;
        }
        ans = (double)cnt / num * 100;
        printf("%.3lf%%\n", ans);
    }
    return 0;
}