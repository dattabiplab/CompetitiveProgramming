#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define nl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	while (T--)
	{
		int x, y;
		cin >> x >> y;
		if (y != 0)
		{
			if (y % 2 == 0)
			{
				cout << "Janmansh" << nl;
			}
			else if (y % 2 != 0)
			{
				cout << "Jay" << nl;
			}
		}
	}
	return 0;
}