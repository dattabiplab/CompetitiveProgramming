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
		int n;cin>>n;int a[n];
		in(n,a)
		//int totalSundays=4;
		//int totalSaturdays=4;
		int ans,count=0;
		f(n){
			if(a[i]!=6 &&a[i]!=13 && a[i]!=20 && a[i]!=27 && a[i]!=7 &&a[i]!=14 && a[i]!=21 && a[i]!=28) count++;
		}
		ans=8+count;
		cout<<ans<<nl;
	}
	return 0;
}