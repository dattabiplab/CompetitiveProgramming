#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define nl '\n'
int n;
int qualify(int)
{
	int count;
	count = 0;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if ((10 <= a[i]) && (a[i] <= 60))
		{
			count++;
		}
	}
	return count + 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	while (T--)
	{
		cin >> n;
		qualify(n);
		// cout<<count<<nl;
		cout << qualify(n) << nl;
	}
	return 0;
}