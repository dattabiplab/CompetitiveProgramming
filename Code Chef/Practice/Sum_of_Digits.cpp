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
		int sum = 0;
		int n;
		cin >> n;
		while (n > 0)
		{
			sum += (n % 10);
			n /= 10;
		}
		cout << sum << nl;
	}
	return 0;
}