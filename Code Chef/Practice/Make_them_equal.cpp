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
#define i(a,b,c) ll a,b,c; cin>>a>>b>>c;
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
		int n;cin>>n;
		vec(n);
		f(n) cin>>v[i];
		//f(n) cout<<v[i];
		ll maxx= *max_element(v.begin(),v.end());
		ll ans=0;
		for(auto a: v) {ans=max(ans,maxx-a);}
		cout<<ans<<nl;
	}
	return 0;
}