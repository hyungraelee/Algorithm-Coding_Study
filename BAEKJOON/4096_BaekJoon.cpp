#include <iostream>
#include <vector>

std::vector<std::string> test_case;
std::vector<int> answers;

void input()
{
	while (true)
	{
		std::string tmp;
		std::cin >> tmp;
		if (tmp == "0")
			break ;
		test_case.push_back(tmp);
	}
}

bool is_palin(std::string mileage)
{
	std::string::iterator it = mileage.begin();
	std::string::reverse_iterator rit = mileage.rbegin();

	for (; it != mileage.end(); it++, rit++)
	{
		if (*it != *rit)
			return (false);
	}
	return (true);
}

void update_answer(int answer)
{
	answers.push_back(answer);
}

void add_one(std::string &mileage)
{
	int pre_len = mileage.length();
	int new_mileage = stoi(mileage) + 1;

	mileage = std::to_string(new_mileage);
	int count = pre_len - mileage.length();
	if (count < 0)
		return ;
	mileage.insert(0, count, '0');
}

void get_answer(std::string mileage)
{
	int answer = 0;

	while (true)
	{
		if (is_palin(mileage))
			return (update_answer(answer));
		add_one(mileage);
		answer++;
	}
}

void solution()
{
	answers.reserve(test_case.size());
	std::vector<std::string>::iterator it = test_case.begin();

	for (; it != test_case.end(); it++)
	{
		get_answer(*it);
	}
}

void print()
{
	std::vector<int>::iterator it = answers.begin();

	for (; it != answers.end(); it++)
		std::cout << *it << std::endl;
}

int main()
{
	input();
	solution();
	print();
}
