#include <iostream>
using namespace std;

int main()
{
	int n, i, X, Y;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> X >> Y;
		if (X > Y)
		{
			cout << "CAR" << endl;
		}
		else if (X < Y)
		{
			cout << "BIKE" << endl;
		}
		else
		{
			cout << "SAME" << endl;
		}
	}
	return 0;
}