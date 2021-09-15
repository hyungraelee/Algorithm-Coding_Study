#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int result;

	for (int i = 1; i < N; i++)
	{
		result = i;
		for (int j = i; j != 0; j /= 10)
		{
			result += j % 10;
		}
		if (result == N)
		{
			cout << i << endl;
			return (0);
		}
	}
	cout << 0 << endl;
	return (0);
}
