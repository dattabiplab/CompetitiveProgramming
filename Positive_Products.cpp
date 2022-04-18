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
		ll n, count = 0;
		cin >> n;
		ll a[n];
		in(n, a)
			f(n)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (i != j)
				{
					if (a[i] * a[j] > 0)
						count++;
				}
			}
		}
		cout << count << nl;
	}
	return 0;
}