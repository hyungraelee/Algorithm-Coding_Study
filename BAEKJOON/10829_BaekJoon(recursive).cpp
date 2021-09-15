#include <iostream>
#include <string>

using namespace std;

void get_bin(long N, string &result)
{
	if (N == 0)
		return ;
	result = to_string(N % 2) + result;
	get_bin(N/2, result);
	return ;
}

int main()
{
	long N;
	cin >> N;
	string result;

	get_bin(N, result);
	cout << result << endl;
}
