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
		int n;
		double a,b;
		cin>>n>>a>>b;
		float arr[n];
		f(n) cin>>arr[i];
		double x=0.0,y=0.0;
		f(n)
		{
			if(arr[i]==a) x=x+1;
			if(arr[i]==b) y=y+1;
		}
		cout<<fixed<<setprecision(10);
		cout<<(x/n)*(y/n)<<nl;
	}
	return 0;
}