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
#define i(a, b, c, d) \
	ld a, b, c, d;    \
	cin >> a >> b >> c >> d;
#define nl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	i(a, b, c, d)
		ld x,
		y;
	x = (c - a) * (c - a);
	y = (d - b) * (d - b);
	cout << fixed << setprecision(16) << sqrt(x + y);
	// cout<<sqrt(pow(c-a,2)+pow(d-b,2));
	// cout<<sqrt(x+y);
	return 0;
}