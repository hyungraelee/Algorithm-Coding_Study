#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

typedef std::vector<int> Intvct;

void input(Intvct &data)
{
	int tmp;

	for (int i = 0; i < 9; i++) {
		std::cin >> tmp;
		data[i] = tmp;
	}
}

void combination(Intvct data, Intvct selected, int n,  int r, int index, int depth)
{
	if (r == 0)
	{
		if (std::accumulate(selected.begin(), selected.end(), 0) == 100)
		{
			for (int i = 0; i < 7; i++)
			{
				std::cout << selected[i] << std::endl;
			}
			exit(0);
		}
	}
	else if (n == depth)
		return ;
	else
	{
		selected[index] = data[depth];
		combination(data, selected, n, r - 1, index + 1, depth + 1);
		combination(data, selected, n, r, index, depth + 1);
	}
}

int main()
{
	int n = 9, r = 7;
	Intvct data(n);
	Intvct selected(r);

	input(data);

	std::sort(data.begin(), data.end());

	combination(data, selected, n, r, 0, 0);

	return (0);
}
