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
		ll n,k;cin>>n>>k;
		ll a[n];
		in(n,a)
		ll prev_price=0,current_price=0;
		f(n) prev_price+=a[i];

		f(n){
			if(a[i]>k) a[i]=k;
		}
		f(n) current_price+=a[i];
		cout<<prev_price-current_price<<nl;
	}
	return 0;
}