#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define pob pop_back
#define f(n) for (int i = 1; i <= n; i++)
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
		ll n;
		int ans = 0;
		cin >> n;
		int a[n];
		in(n, a)
			f(n)
		{
			if (a[i] == 1)	ans = i;
			if (a[i] == 2)	ans = max(i, ans);
			if (a[i] == 3)	ans = max(i, ans);
			if (a[i] == 4)	ans = max(i, ans);
			if (a[i] == 5)	ans = max(i, ans);
			if (a[i] == 6)	ans = max(i, ans);
			if (a[i] == 7)	ans = max(i, ans);
		}
		cout << ans+1 << nl;
	}
	return 0;
}