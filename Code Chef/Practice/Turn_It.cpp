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
	cin>>T;
	while (T--)
	{
		int u, v, a, s;
		cin >> u >> v >> a >> s;
		int V=v*v;
		int V1=(u*u)-(2*a*s);
		if(V>=V1) cout<<"Yes"<<nl;
		else cout<<"No"<<nl;
	}
	return 0;
}