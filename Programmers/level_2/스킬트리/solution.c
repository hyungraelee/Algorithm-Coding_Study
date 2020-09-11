#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// skill_trees_len은 배열 skill_trees의 길이입니다.
int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    int answer = skill_trees_len, len_skill;
        // 전부 가능한 스킬트리라고 가정, 불가능한거 나올때마다 -1
        // skill을 전부다 배우지 않아도 가능한 스킬트리이기 때문.
    len_skill = strlen(skill);

    for (int i = 0 ; i < skill_trees_len ; i++) // skill_tress의 원소 갯수 만큼 체크.
    {
        int len_each_skill_trees = strlen(skill_trees[i]);
        int check_skill_trees[26];
        for (int j = 0 ; j < 26 ; j++)
            check_skill_trees[j] = 27;          // 0으로 초기화 하면 불가능한 스킬 트리 검사 시 배우지 않은 스킬에서 검사식 오류.
                                                // 따라서 가장 늦게 배운 스킬의 순서인 26보다 큰 27로 초기화.
        for (int j = 0 ; j < len_each_skill_trees ; j++)
            check_skill_trees[(int)skill_trees[i][j] - 'A'] = j + 1;
        // skill_trees 에서 스킬 배운 '순서'대로 배열에 초기화.
        // ex) {B, A, C, D, E} -> {2, 1, 3, 4, 5}; :::B를 1번째로 배움, A를 2번째로 배움.
        for (int k = 0 ; k < len_skill - 1 ; k++)
        {
            if (check_skill_trees[(int)skill[k] - 'A'] > check_skill_trees[(int)skill[k+1] - 'A'])
            {
                answer -= 1;
                break ;
            }
            // 불가능한 스킬 트리 인 경우, answer - 1 하고 다음 스킬트리 확인을 위해 넘어감.
        }
    }

    return answer;
}