#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, sum = 0, rem;
		cin >> n;
		while (n > 0)
		{
			rem = n % 10;
			sum += rem;
			n /= 10;
		}
		cout << sum << endl;
	}
	return 0;
}