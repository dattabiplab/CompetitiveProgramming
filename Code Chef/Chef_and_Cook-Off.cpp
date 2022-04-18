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
		int sum=0;
		vec;
		f(5){
			int n;cin>>n;
			v.pb(n);
			sum+=v[i];
		}
		if(sum==0) cout<<"Beginner"<<nl;
		if(sum==1) cout<<"Junior Developer"<<nl;
		if(sum==2) cout<<"Middle Developer"<<nl;
		if(sum==3) cout<<"Senior Developer"<<nl;
		if(sum==4) cout<<"Hacker"<<nl;
		if(sum==5) cout<<"Jeff Dean"<<nl;
	}
	return 0;
}