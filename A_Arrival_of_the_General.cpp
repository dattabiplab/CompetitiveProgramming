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
	int n;
	cin >> n;
	int a[n + 1];
	in(n, a) int count = 0;
	for (int i = 1; i <= 15; i++)
	{
		if (a[i - 1] < a[i])
		{
			swap(a[i - 1], a[i]);
			count++;
		}
	}
	f(n) cout << a[i] << " ";
	// cout<<count;
	return 0;
}