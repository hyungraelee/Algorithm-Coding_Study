#include <iostream>
#include <algorithm>

# define PARTICIPANT 0
# define NUM_A 1
# define NUM_B 2

int g_list[3], g_answer = 1;

void input()
{
    std::cin >> g_list[PARTICIPANT] >> g_list[NUM_A] >> g_list[NUM_B];
    if (g_list[NUM_A] > g_list[NUM_B])
        std::swap(g_list[NUM_A], g_list[NUM_B]);
}

void  divide()
{
    for (int i = 0; i < 3; i++)
    {
        if (g_list[i] % 2 == 0)
            g_list[i] /= 2;
        else
            g_list[i] = (g_list[i] / 2) + 1;
    }
}

void solution()
{
    if (g_list[NUM_B] - g_list[NUM_A] == 1 && g_list[NUM_A] % 2 == 1)
        return ;
    divide();
    g_answer++;
    solution();
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
    return (0);
}
