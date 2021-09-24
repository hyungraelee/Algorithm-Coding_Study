#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> pel;
std::vector<std::string> pel_rev;
std::vector<std::string> answer;

void input()
{
	std::string tmp;

	while (1)
	{
		std::cin >> tmp;
		if (tmp == "0")
			break ;
		pel.push_back(tmp);
	}
}

void reverse_pel()
{
	std::string tmp_rev;

	for (int i = 0; i < pel.size(); i++)
	{
		tmp_rev = pel[i];
		reverse(tmp_rev.begin(), tmp_rev.end());
		pel_rev.push_back(tmp_rev);
	}
}

void compare_pel()
{
	for (int i = 0; i < pel.size(); i++)
	{
		if (pel[i] == pel_rev[i])
			answer.push_back("yes");
		else
			answer.push_back("no");
	}
}

void print()
{
	for (int i = 0; i < answer.size(); i++)
		std::cout << answer[i] << std::endl;
}

int main()
{
	input();
	reverse_pel();
	compare_pel();
	print();
}
