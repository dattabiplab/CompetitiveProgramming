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
#define vec vector<ll> v;
#define i(a,b,c) ll a,b,c; cin>>a>>b>>c;
#define nl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

		i(n,m,k) vec
		f(n)
		{
			ll sum=0;
			f(k)
			{
				ll t; cin>>t; sum+=t;
			}
			v.pb(sum);
			ll q; cin>>q;
			if(q>10) v.pob();
		}
		ll ans=0;
		for(int i=0;i<v.size();i++) if(v[i]>=m) ans++;
		cout<<ans<<nl;
	return 0;
}