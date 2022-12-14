#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define nl '\n'
ll n,x;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll T;
	cin>>T;
	while (T--)
	{
		cin>>n>>x;
		ll a[n][2];
		for(ll i=0;i<n;i++) cin>>a[i][0]>>a[i][1];
		ll ans=INT_MIN;
		for(ll i=0;i<n;i++) if(a[i][0]<=x && a[i][1]>ans) ans=a[i][1];
		cout<<ans<<nl;
	}
	return 0;
}