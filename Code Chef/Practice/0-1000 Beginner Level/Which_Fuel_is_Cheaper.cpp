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
#define i(a,b,c,d,e) ll a,b,c,d,e; cin>>a>>b>>c>>d>>e;
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
		i(x,y,a,b,k)
		ll pet=x+(a*k);
		ll die=y+(b*k);
		if(pet==die) cout<<"SAME PRICE"<<nl;
		if(pet<die) cout<<"PETROL"<<nl;
		if(pet>die) cout<<"DIESEL"<<nl;
	}
	return 0;
}