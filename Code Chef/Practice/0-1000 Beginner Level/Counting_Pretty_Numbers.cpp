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
int l, r, i, rem;
int num;
void ans(int, int)
{
	num = 0;
	while (l <= r)
	{
		rem = l % 10;
		if (rem == 2 || rem == 3 || rem == 9)
			num++;
		l++;
	}
	cout << num << nl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	while (T--)
	{
		cin >> l >> r;
		ans(l, r);
	}
	return 0;
}