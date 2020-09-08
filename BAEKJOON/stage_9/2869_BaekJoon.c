#include <stdio.h>

int main()
{
    int up, down, height;

    scanf("%d %d %d", &up, &down, &height);

    if ((height - up) % (up - down) != 0)
        printf("%d\n", (height - up) / (up - down) + 2);
    else
        printf("%d\n", (height - up) / (up - down) + 1);
    return 0;
}