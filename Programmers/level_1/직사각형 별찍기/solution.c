#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
이중 for문을 쓰지 않은 다른 사람의 풀이

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    for(int i=0; i<a*b;i++){
        printf("*");
        if((i+1)%a == 0){
            printf("\n");
        }
    }

    return 0;
}

*/