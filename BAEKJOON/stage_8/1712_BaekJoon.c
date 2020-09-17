#include <stdio.h>

int main()
{
    int cost_fixed, cost_var, price;

    scanf("%d %d %d", &cost_fixed, &cost_var, &price);
    if (cost_var >= price)
        printf("-1\n");
    else
        printf("%d\n", cost_fixed / (price - cost_var) + 1);
    return 0;
}