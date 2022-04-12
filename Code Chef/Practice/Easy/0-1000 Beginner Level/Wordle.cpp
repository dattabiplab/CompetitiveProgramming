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
		string s, t, m;
		cin >> s;
		cin >> t;
		for (int i = 0; i < 5; i++)
		{
			if (s[i] == t[i])
			{
				m[i] = 'G';
			}
			else
			{
				m[i] = 'B';
			}
			cout << m[i];
		}
		cout << nl;
	}
	return 0;
}