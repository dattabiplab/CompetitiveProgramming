#include <iostream>
using namespace std;

int main()
{
	int t, n, rem;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int rev_num = 0;
		while (n != 0)
		{
			rem = n % 10;
			rev_num = (rev_num * 10) + rem;
			n /= 10;
		}
		cout << rev_num << endl;
	}
	return 0;
}