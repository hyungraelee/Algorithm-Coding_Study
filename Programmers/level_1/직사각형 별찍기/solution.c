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
���� for���� ���� ���� �ٸ� ����� Ǯ��

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