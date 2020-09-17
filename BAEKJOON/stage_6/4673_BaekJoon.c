#include <stdio.h>

int mk_number(int num)
{
    int ans = num;

    while(num)
    {
        ans = ans + num % 10;
        num /= 10;
    } 
    return ans;
}

int main()
{
    int numarr[10000] = {0,};
    int index;

    for (int i = 0 ; i < 10000 ; i++)
    {
        index = mk_number(i + 1);
        if (index <= 10000)
            numarr[index - 1] = 1;
        if (numarr[i] == 0)
            printf("%d\n", i + 1);
    }
    return 0;
}