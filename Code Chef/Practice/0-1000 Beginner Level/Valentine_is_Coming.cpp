#include <iostream>
using namespace std;

int main()
{
	int n, i, X, Y;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> X >> Y;
		cout << X / Y << endl;
	}
	return 0;
}