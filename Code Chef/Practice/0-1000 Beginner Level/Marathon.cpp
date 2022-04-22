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
#define i(a, b, c, d, e) \
	ll a, b, c, d, e;    \
	cin >> a >> b >> c >> d >> e;
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
		i(D, d, a, b, c)
		if (D * d < 10) cout
			<< 0 << nl;
		if (10 <= D * d && D * d < 21)
			cout << a << nl;
		if (21 <= D * d && D * d < 42)
			cout << b << nl;
		if (42 <= D * d)
			cout << c << nl;
	}
	return 0;
}