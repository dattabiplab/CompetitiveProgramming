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
#define i(a,b,c,d) double a,b,c,d; cin>>a>>b>>c>>d;
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
		i(t1,t2,r1,r2)
		double p1,p2;
		p1= pow(t1,2)/pow(r1,3);
		p2= pow(t2,2)/pow(r2,3);
		if(p1==p2) cout<<"YES"<<nl;
		if(p1!=p2) cout<<"NO"<<nl;
	}
	return 0;
}