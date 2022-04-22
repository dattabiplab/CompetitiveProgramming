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
		ll m,h,ans;
		cin>>m>>h;
		ans=m/(h*h);
		if(ans<=18) cout<<"1"<<nl;
		if(19<=ans && ans<=24) cout<<"2"<<nl;
		if(25<=ans && ans<=29) cout<<"3"<<nl;
		if(ans>=30) cout<<"4"<<nl;
	}
	return 0;
}