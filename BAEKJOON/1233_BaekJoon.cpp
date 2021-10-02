#include <iostream>
#include <vector>

int g_s1, g_s2, g_s3, g_answer = 80;
std::vector<int> g_sum_counting(81, 0);

void input()
{
    std::cin >> g_s1 >> g_s2 >> g_s3;
}

void count_sum()
{
    for (int i = 1; i <= g_s1; i++)
    {
        for (int j = 1; j <= g_s2; j++)
        {
            for (int k = 1; k <= g_s3; k++)
            {
                g_sum_counting[i + j + k]++;
            }
        }
    }
}

void get_answer()
{
    int max = 0;

    for (int i = 80; i >= 3; i--)
    {
        if (g_sum_counting[i] >= max)
        {
            max = g_sum_counting[i];
            g_answer = i;
        }
    }
}

void solution()
{
    count_sum();
    get_answer();
}

void print()
{
    std::cout << g_answer << std::endl;
}

int main()
{
    input();
    solution();
    print();
}
