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
		int a,b;cin>>a>>b;
		if(a+b<3) cout<<"1"<<nl;
		if(3<=a+b && a+b<=10) cout<<"2"<<nl;
		if(11<=a+b && a+b<=60) cout<<"3"<<nl;
		if(a+b>60) cout<<"4"<<nl;
	}
	return 0;
}