#include <stdio.h>
#include <stdlib.h>

void init_arr(int, char **);
void set_Star(int, int, int, char **);

int main()
{
    int n;
    scanf("%d", &n);

    char **arr; 
    arr = (char **)malloc(sizeof(char*) * n);
    for (int p = 0 ; p < n ; p++)
        arr[p] = (char *)malloc(sizeof(char) * (n + 1));

    init_arr(n, arr);
    
    set_Star(0, 0, n, arr);
    
    for (int i = 0 ; i < n ; i++)
        printf("%s\n", arr[i]);

    for (int i = 0 ; i < n ; i++)
        free(arr[i]);
    free(arr);

    return 0;
}

void init_arr(int n, char** arr)
{
    for (int i = 0 ; i < n ; i++)
        for (int j = 0 ; j <= n ; j++)
            if (j == n)
                arr[i][j] = 0;
            else
                arr[i][j] = ' ';
    return ;
}

void set_Star(int r, int c, int n, char **arr)
{
    if (n == 1)
    {
        arr[r][c] = '*';
        return ;
    }

    int m = n / 3;
    for (int i = 0 ; i < 3 ; i++)
        for (int j = 0 ; j < 3 ; j++)
            if (i == 1 && j == 1)
                ;
            else
                set_Star(r + i*m, c + j*m, m, arr);
    
    return ;
}
