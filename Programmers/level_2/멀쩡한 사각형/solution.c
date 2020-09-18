#include <stdio.h>

long long solution(int w, int h) {
    long long answer = 0, temp;
    
    for (int x = 1 ; x < w ; x++)
    {
        temp = ((-1)*((double)h/w)*x + h);
        answer += temp;
    }
    return (answer * 2);
}

/*
    x,y 좌표 평면을 이용.
    1cm * 1cm 각 사각형의 오른쪽 위 점의 y좌표를 기준으로,
    각 x마다
    y <= -(h/w)x + h
    인 갯수를 더해주어 구함.
*/