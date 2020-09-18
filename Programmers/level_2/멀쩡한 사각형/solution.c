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
    x,y ��ǥ ����� �̿�.
    1cm * 1cm �� �簢���� ������ �� ���� y��ǥ�� ��������,
    �� x����
    y <= -(h/w)x + h
    �� ������ �����־� ����.
*/