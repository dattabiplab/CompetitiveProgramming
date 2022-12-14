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
		string s;
		cin >> s;
		if (s.length() % 2 == 0)
		{
			for (int i = 0; i < s.length(); i += 2)
			{
				cout << s[i + 1] << s[i];
			}
		}
			else
			{
				for (int i = 0; i < s.length()-1; i += 2)
				{
					cout << s[i + 1] << s[i];
				}
				cout<<s[s.length()-1];
			}
		cout << nl;
	}
	return 0;
}