#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>

int g_row, g_col, g_rotate_trial, g_answer = std::numeric_limits<int>::max();
std::vector<std::vector<int> > g_arr;
std::vector<std::vector<int> > g_rotate;

void input()
{
    std::cin >> g_row >> g_col >> g_rotate_trial;

    g_arr.reserve(g_row);
    for (int i = 0; i < g_row; i++)
    {
        std::vector<int> tmp_vec(g_col);
        for (int j = 0; j < g_col; j++)
        {
            int tmp;
            std::cin >> tmp;
            tmp_vec[j] = tmp;
        }
        g_arr.push_back(tmp_vec);
    }

    g_rotate.reserve(g_rotate_trial);
    for (int i = 0; i < g_rotate_trial; i++)
    {
        std::vector<int> tmp_vec(3);
        for (int j = 0; j < 3; j++)
        {
            int tmp;
            std::cin >> tmp;
            tmp_vec[j] = tmp;
        }
        g_rotate.push_back(tmp_vec);
    }
}

void get_arr_value(std::vector<std::vector<int> > rotated_arr)
{
    int tmp;

    for (size_t i = 0; i < rotated_arr.size(); i++)
    {
        tmp = std::accumulate(rotated_arr[i].begin(), rotated_arr[i].end(), 0);
        if (tmp < g_answer)
            g_answer = tmp;
    }
}

void rotate(std::vector<std::vector<int> > &arr, std::vector<int> r_arr)
{
    int row = r_arr[0] - 1, col = r_arr[1] - 1;

    for (int distance = 1; distance <= r_arr[2]; distance++)
    {
        int push;
        int pop = 0;
        for (int j = col - distance; j <= col + distance; j++)
        {
            push = arr[row - distance][j];
            arr[row - distance][j] = pop;
            pop = push;
        }
        for (int i = row - distance + 1; i <= row + distance; i++)
        {
            push = arr[i][col + distance];
            arr[i][col + distance] = pop;
            pop = push;
        }
        for (int j = col + distance - 1; j >= col - distance; j--)
        {
            push = arr[row + distance][j];
            arr[row + distance][j] = pop;
            pop = push;
        }
        for (int i = row + distance - 1; i >= row - distance; i--)
        {
            push = arr[i][col - distance];
            arr[i][col - distance] = pop;
            pop = push;
        }
    }
}

void rotateArr(std::vector<std::vector<int> > current_rotate_set)
{
    std::vector<std::vector<int> > rotated_arr = g_arr;
    for (size_t i = 0; i < current_rotate_set.size(); i++)
    {
        rotate(rotated_arr, current_rotate_set[i]);
    }
    get_arr_value(rotated_arr);
}

void solution()
{
    std::sort(g_rotate.begin(), g_rotate.end());
    do
    {
        rotateArr(g_rotate);
    } while (std::next_permutation(g_rotate.begin(), g_rotate.end()));
}

int main()
{
    input();
    solution();
    std::cout << g_answer << std::endl;
}
