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
		ll n;
		cin >> n;
		ll ans = n / 7;
		ll rem = n % 7;
		if (rem == 6)
		{
			cout << ans + 1 << nl;
		}
		else
		{
			cout << ans << nl;
		}
	}
	return 0;
}