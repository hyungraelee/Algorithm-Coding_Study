#include <iostream>
#include <vector>
#include <utility>
#include <map>

int g_trial, g_len;
std::vector<std::string> g_data;
std::pair<std::string, int> g_answer;

void input()
{
    std::string tmp;

    std::cin >> g_trial >> g_len;
    g_data.reserve(g_trial);
    for (int i = 0; i < g_trial; i++)
    {
        std::cin >> tmp;
        g_data.push_back(tmp);
    }
}

void update_answer(std::map<char, int>& count)
{
    int max = 0;
    std::map<char, int>::reverse_iterator rit = count.rbegin();
    char answer;

    for (; rit != count.rend(); rit++)
    {
        if((*rit).second >= max)
        {
            max = (*rit).second;
            answer = (*rit).first;
        }
    }
    g_answer.first.push_back(answer);
    g_answer.second += g_trial - max;
}

void solution()
{
    std::map<char, int> count;

    for (int col = 0; col < g_len; col++)
    {
        count.clear();
        for (int row = 0; row < g_trial; row++)
        {
            char tmp = g_data[row][col];
            count[tmp]++;
        }
        update_answer(count);
    }
}

void print()
{
    std::cout << g_answer.first << std::endl;
    std::cout << g_answer.second << std::endl;
}

int main()
{
    input();
    solution();
    print();
    return (0);
}
