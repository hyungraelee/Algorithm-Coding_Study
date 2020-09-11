#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// skill_trees_len�� �迭 skill_trees�� �����Դϴ�.
int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    int answer = skill_trees_len, len_skill;
        // ���� ������ ��ųƮ����� ����, �Ұ����Ѱ� ���ö����� -1
        // skill�� ���δ� ����� �ʾƵ� ������ ��ųƮ���̱� ����.
    len_skill = strlen(skill);

    for (int i = 0 ; i < skill_trees_len ; i++) // skill_tress�� ���� ���� ��ŭ üũ.
    {
        int len_each_skill_trees = strlen(skill_trees[i]);
        int check_skill_trees[26];
        for (int j = 0 ; j < 26 ; j++)
            check_skill_trees[j] = 27;          // 0���� �ʱ�ȭ �ϸ� �Ұ����� ��ų Ʈ�� �˻� �� ����� ���� ��ų���� �˻�� ����.
                                                // ���� ���� �ʰ� ��� ��ų�� ������ 26���� ū 27�� �ʱ�ȭ.
        for (int j = 0 ; j < len_each_skill_trees ; j++)
            check_skill_trees[(int)skill_trees[i][j] - 'A'] = j + 1;
        // skill_trees ���� ��ų ��� '����'��� �迭�� �ʱ�ȭ.
        // ex) {B, A, C, D, E} -> {2, 1, 3, 4, 5}; :::B�� 1��°�� ���, A�� 2��°�� ���.
        for (int k = 0 ; k < len_skill - 1 ; k++)
        {
            if (check_skill_trees[(int)skill[k] - 'A'] > check_skill_trees[(int)skill[k+1] - 'A'])
            {
                answer -= 1;
                break ;
            }
            // �Ұ����� ��ų Ʈ�� �� ���, answer - 1 �ϰ� ���� ��ųƮ�� Ȯ���� ���� �Ѿ.
        }
    }

    return answer;
}