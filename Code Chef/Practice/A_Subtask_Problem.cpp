
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define pob pop_back
#define f(n) for (int i = 0; i < n; i++)
#define in(n, a)                \
	for (int i = 0; i < n; i++) \
		cin >> a[i];
#define vec vector<ll> v
#define i(a, b, c) \
	ll a, b, c;    \
	cin >> a >> b >> c;
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
		i(n, m, k) vec(n);
		ll ans = 0, sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
			sum += v[i];
			if (i == m - 1 && sum == m)
				ans = k;
		}
		if (sum == n)
			ans = 100;
		cout << ans << nl;
	}
	return 0;
}