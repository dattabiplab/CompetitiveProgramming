#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define pob pop_back
#define f(n) for(int i=0;i<n;i++)
#define in(n,a) for(int i=0;i<n;i++) cin>>a[i];
#define vec vector<ll> v
#define i(a,b,c) int a,b,c; cin>>a>>b>>c;
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
		i(a,b,c)
		int ans=min(a,min(b,c));
		if(ans==a) cout<<"Draw"<<nl;
		else if(ans==b) cout<<"Bob"<<nl;
		else if(ans==c) cout<<"Alice"<<nl;
	}
	return 0;
}