#include <stdio.h>

int main()
{
    int r;
    double ar1, ar2, M_PI;

    scanf("%d", &r);
    M_PI = 3.141592653589;
    ar1 = r * r * M_PI;
    ar2 = r * r * 2;
    printf("%.6lf\n", ar1);
    printf("%.6lf\n", ar2);
    return 0;
}