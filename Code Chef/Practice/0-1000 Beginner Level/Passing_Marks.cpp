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
#define i(a,b,c,d,e,f,g) ll a,b,c,d,e,f,g; cin>>a>>b>>c>>d>>e>>f>>g;
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
		i(amin,bmin,cmin,tmin,a,b,c)
		if(a>=amin && b>=bmin &&c>=cmin && (a+b+c)>=tmin) cout<<"YES"<<nl;
		else cout<<"NO"<<nl;
	}
	return 0;
}