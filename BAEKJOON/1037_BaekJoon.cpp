#include <iostream>
#include <vector>
#include <algorithm>

std::vector<unsigned int> g_divisors;
unsigned int g_answer;

void input()
{
    int num_of_divisor;
    std::cin >> num_of_divisor;
    g_divisors.reserve(num_of_divisor);
    for (int i = 0; i < num_of_divisor; i++)
    {
        int tmp;
        std::cin >> tmp;
        g_divisors.push_back(tmp);
    }
}

void pre_processing()
{
    std::sort(g_divisors.begin(), g_divisors.end());
    std::reverse(g_divisors.begin(), g_divisors.end());
}

void solution()
{
    g_answer = *g_divisors.begin() * *(--g_divisors.end());
}

void print()
{
    std::cout << g_answer << std::endl;
}

int main()
{
    input();
    pre_processing();
    solution();
    print();
}
