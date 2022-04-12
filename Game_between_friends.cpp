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
#define i(a,b,c,d) ll a,b,c,d; cin>>a>>b>>c>>d;
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
		i(a,b,c,d)
		ll nit,sobh;
		if(min(a,b)==a) nit=a+c;
		if(min(nit,b)==b) sobh=b+d;
		if(min(nit,b)==a) nit=nit+d;
		if(min(a,b)==b) sobh=b+c;
		if(min(sobh,b)==b) nit=a+d;
		if(min(sobh,b)==a) sobh=sobh+d;
		cout<<nit<<" "<<sobh<<" ";
		// if(sobh<=nit) cout<<"N"<<nl;
		// if(sobh>nit) cout<<"S"<<nl;
		nit=0;sobh=0;
	}
	return 0;
}