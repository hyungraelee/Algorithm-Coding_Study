#include <stdio.h>

int count[10001];

int main()
{
    int n, temp;
    scanf("%d", &n);
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &temp);
        count[temp]++;
    }

    for (int i = 1 ; i <= 10000 ; i++)
        for (int j = 0 ; j < count[i] ; j++)
            printf("%d\n", i);
    
    return 0;
}