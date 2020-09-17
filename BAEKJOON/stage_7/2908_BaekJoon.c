#include <stdio.h>

int rev_num(int num);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    a = rev_num(a);
    b = rev_num(b);
    if (a > b)
        printf("%d", a);
    else
        printf("%d", b);
        
    return 0;
}

int rev_num(int num)
{
    int ans;

    ans = ((num % 10) * 100) + (((num / 10) % 10) * 10) + (num / 100);
    return ans;
}