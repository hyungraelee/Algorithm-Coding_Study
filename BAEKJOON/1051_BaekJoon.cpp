#include <iostream>
#include <vector>

std::vector<std::string> g_rec;
int g_row, g_col, g_answer;

void input()
{
    std::string tmp;

    std::cin >> g_row >> g_col;
    g_answer = std::min(g_row, g_col);
    for (int i = 0; i < g_row; i++)
    {
        std::cin >> tmp;
        g_rec.push_back(tmp);
    }
}

void solution()
{
    if (g_answer == 1)
        return ;
    for (int i = 0; i < g_row - g_answer + 1; i++)
    {
        for (int j = 0; j < g_col - g_answer + 1; j++)
        {
            if (g_rec[i][j] == g_rec[i][j + g_answer - 1] &&
                g_rec[i + g_answer - 1][j] == g_rec[i + g_answer - 1][j + g_answer - 1] &&
                g_rec[i][j] == g_rec[i + g_answer - 1][j])
            {
                return ;
            }
        }
    }
    g_answer--;
    solution();
}

void print()
{
    std::cout << g_answer * g_answer << std::endl;
}

int main()
{
    input();
    solution();
    print();
    return (0);
}
