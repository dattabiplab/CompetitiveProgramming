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
#define i(a,b,c,d,e,f,g,h,i,j) ll a,b,c,d,e,f,g,h,i,j; cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
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
		i(a,b,c,d,e,f,g,h,i,j)
		ll g1,g2;
		g1=a+c+e+g+i;
		g2=b+d+f+h+j;
		if(g1==g2) cout<<0<<nl;
		if(g1>g2) cout<<1<<nl;
		if(g1<g2) cout<<2<<nl;
	}
	return 0;
}