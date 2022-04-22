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
		i(a, b, c) if ((a == 0 && b == 0 && c == 0) || (a == 1 && b == 1 && c == 1)) cout << 0 << nl;
		if ((a == 0 && b == 1) || (a == 1 && b == 0) || (c == 0 && b == 1) || (c == 1 && b == 0) || (c == 0 && a == 1) || (c == 1 && a == 0))
			cout << 1 << nl;
		// if((c==0 && b==1) || (c==1 && b==0))cout<<1<<nl;
		// if((c==0 && a==1) || (c==1 && a==0))cout<<1<<nl;
	}
	return 0;
}