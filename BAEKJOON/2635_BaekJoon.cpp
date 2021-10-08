#include <iostream>
#include <vector>

std::vector<int> g_answer;
std::vector<int> tmp;

void solution(int first, int second)
{
    if (first < second)
        return ;
    tmp.push_back(first - second);
    solution(second, first - second);
}

void print()
{
    std::cout << g_answer.size() << std::endl;
    for (int i = 0; i < g_answer.size(); i++)
        std::cout << g_answer[i] << ' ';
    std::cout << std::endl;
}

int main()
{
    int f_num;

    std::cin >> f_num;
    for (int i = 1; i <= f_num; i++)
    {
        tmp.push_back(f_num);
        tmp.push_back(i);
        solution(f_num, i);
        if (tmp.size() > g_answer.size())
            g_answer = tmp;
        tmp.clear();
    }
    print();
    return (0);
}
