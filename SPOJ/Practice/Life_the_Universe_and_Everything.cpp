#include <iostream>
using namespace std;

int main()
{
	int i, n;
	for (i = 1; i < 100; i++)
	{
		cin >> n;
		if (n == 42)
		{
			break;
		}
		else
		{
			cout << n << endl;
		}
	}
	return 0;
}