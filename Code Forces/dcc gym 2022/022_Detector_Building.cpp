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
	ld a, b, c;    \
	cin >> a >> b >> c;
#define nl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	i(t1, t2, t3)
		i(r1, r2, r3)
			ld l1,
		l2, l3;
	ld y1, y2, y3;
	ld g2, g3;
	ld a, b, c;

	l1 = log(r1);
	l2 = log(r2);
	l3 = log(r3);

	y1 = 1 / t1;
	y2 = 1 / t2;
	y3 = 1 / t3;

	g2 = (y2 - y1) / (l2 - l1);
	g3 = (y3 - y1) / (l3 - l1);

	c = ((g3 - g2) / (l3 - l2)) * (1 / (l1 + l2 + l3));
	b = g2 - (c * ((l1 * l1) + (l1 * l2) + (l2 * l2)));
	a = y1 - l1 * (b + (l1 * l1 * c));
	cout << fixed << setprecision(15) << a << nl;
	return 0;
}