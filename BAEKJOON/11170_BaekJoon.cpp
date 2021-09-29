#include <iostream>
#include <vector>

std::vector<int *> data;
std::vector<int> answer;

void input()
{
    int T;
    int begin, end;

    std::cin >> T;
    data.reserve(T);
    for (int i = 0; i < T; i++)
    {
        int *tmp = new int[2];
        std::cin >> begin >> end;
        tmp[0] = begin;
        tmp[1] = end;
        data.push_back(tmp);
    }
}

int count_zero(int num)
{
    int count = 0;

    if (num == 0)
        return (1);
    while (num != 0)
    {
        if (num % 10 == 0)
            count++;
        num /= 10;
    }
    return (count);
}

void solve_each_range(int *range)
{
    int sum = 0;

    for (int i = range[0]; i <= range[1]; i++)
    {
        sum += count_zero(i);
    }
    answer.push_back(sum);
}

void solution()
{
    for (int i = 0; i < data.size(); i++)
    {
        solve_each_range(data[i]);
    }
}

void print()
{
    for (int i = 0; i < answer.size(); i++)
    {
        std::cout << answer[i] << std::endl;
    }
}

void memory()
{
    for (int i = 0; i < data.size(); i++)
    {
        delete [] data[i];
    }
}

int main()
{
    input();
    solution();
    print();
    memory();
}
