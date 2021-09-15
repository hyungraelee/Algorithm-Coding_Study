#include <iostream>

using namespace std;

int main()
{
	long N;
	cin >> N;

	string result;

	for (; N != 0;)
	{
		if (N % 2 == 0)
			result = '0' + result;
		else
			result = '1' + result;
		N /= 2;
	}
	cout << result << endl;
}
