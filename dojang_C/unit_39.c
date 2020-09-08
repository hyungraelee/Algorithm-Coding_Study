#include <stdio.h>

int main()
{
    int c, i, large[26] = {0, }, small[26] = {0, };
    int size = sizeof(large) / sizeof(large[0]);

    while ((c = getchar()) != EOF)
    {
        if (c >= 'A' && c <= 'Z') ++large[c - 'A'];
        else if (c >= 'a' && c <= 'z') ++small[c - 'a'];
    }
    for (i = 0 ; i < size ; i++)
    {
        if (i % 6 == 0)
            printf("\n");
        printf("%4c : %3d", 'A' + i, large[i]);
    }
    for (i = 0 ; i < size ; i++)
    {
        if (i % 6 == 0)
            printf("\n");
        printf("%4c : %3d", 'a' + i, small[i]);
    }
    return 0;
}