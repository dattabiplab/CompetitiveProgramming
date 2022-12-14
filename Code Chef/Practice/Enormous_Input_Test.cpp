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
	int n, k;
	cin >> n>>k;
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		ll t;
		cin >> t;
		if (t % k == 0)
		{
			counter++;
		}
	}
	cout << counter;
	return 0;
}
