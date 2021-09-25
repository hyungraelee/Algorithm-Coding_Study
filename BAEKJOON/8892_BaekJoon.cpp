#include <iostream>
#include <vector>
#include <algorithm>

int print(std::string word = "0")
{
	std::cout << word << std::endl;
	return (1);
}

int check_pel(std::string word)
{
	std::string rev_word = word;
	reverse(rev_word.begin(), rev_word.end());
	if (word == rev_word)
		return (print(word));
	return (0);
}

int join_words(std::vector<std::string> words)
{
	std::vector<std::string>::iterator it_word1;
	std::vector<std::string>::iterator it_word2;

	for (it_word1 = words.begin(); it_word1 != words.end(); ++it_word1)
	{
		for (it_word2 = words.begin(); it_word2 != words.end(); ++it_word2)
		{
			if (it_word1 == it_word2)
				continue ;
			if (check_pel(*it_word1 + *it_word2))
				return (1);
		}
	}
	return (print());
}

int main()
{
	int test_case;
	std::cin >> test_case;
	for (int t = 0; t < test_case ; t++)
	{
		int num_of_words;
		std::cin >> num_of_words;

		std::vector<std::string> words;
		for (int k = 0; k < num_of_words; k++)
		{
			std::string temp;
			std::cin >> temp;
			words.push_back(temp);
		}
		join_words(words);
	}
}
