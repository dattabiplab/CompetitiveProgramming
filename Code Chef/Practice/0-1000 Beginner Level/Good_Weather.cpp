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
		int a[7];
		int ans1=0,ans0=0;
		in(7,a)
		f(7){
			if(a[i]==1) ans1++;
			else if(a[i]==0) ans0++;
		}
		if(ans1>ans0) cout<<"YES"<<nl;
		else if(ans1<=ans0) cout<<"NO"<<nl;
	}
	return 0;
}