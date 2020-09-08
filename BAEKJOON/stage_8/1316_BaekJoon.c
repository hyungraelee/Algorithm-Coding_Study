#include <stdio.h>

int main()
{
    int n, cnt = 0;

    scanf("%d", &n);
    for (int i = 0 ; i < n ; i++)
    {
        char str[101];
        int alpha[26] = {0,};
        scanf("%s", str);
        for (int j = 0 ; str[j] ; j++)
        {
            if (j == 0)
            {
                alpha[(int)str[j] - 'a'] = 1;
            }
            else if (alpha[(int)str[j] - 'a'] == 0)
            {
                if (alpha[(int)str[j - 1] - 'a'] == 1)
                    alpha[(int)str[j - 1] - 'a'] = 2;
                alpha[(int)str[j] - 'a'] = 1;
            }
            else if (alpha[(int)str[j] - 'a'] == 1)
                continue;
            else if (alpha[(int)str[j] - 'a'] == 2)
            {
                cnt++;
                break;
            }
        }
    }

    printf("%d\n", n - cnt);
    
    return 0;
}