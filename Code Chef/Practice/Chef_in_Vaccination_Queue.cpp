#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
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
		int n, p, x, y;
		cin >> n >> p >> x >> y;
		int a[n];
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		int ans = 0;
		for (int i = 1; i <= p; i++)
			if (a[i] == 0)
				ans += x;
			else if (a[i] == 1)
				ans += y;
		cout << ans << nl;
	}
	return 0;
}