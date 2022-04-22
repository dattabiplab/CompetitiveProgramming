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
void solution();
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	while (T--)
	{
		solution();
	}
	return 0;
}
void solution()
{
	int p, ans = 0;
	cin >> p;
	for (int i = 11; i >= 0; i--)
	{
		int price = pow(2, i);
		while (p >= price)
		{
			ans++;
			p -= price;
		}
	}
		cout << ans << nl;
}