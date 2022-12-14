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
		int n;cin>>n;
		int sum1=0;int sum2=0;
		vector<ll> v1;
		vector<ll> v2;
		f(n){
			int a;cin>>a;
			v1.pb(a);
		}
			sum1= accumulate(v1.begin(),v1.end(),sum1)-(*max_element(v1.begin(),v1.end()));
		f(n){
			int b;cin>>b;
			v2.pb(b);
			// cout<<v2[i]<<" ";
		}
			sum2= accumulate(v2.begin(),v2.end(),sum2)-(*max_element(v2.begin(),v2.end()));
		//cout<<sum1<<" "<<sum2<<nl;
		if(sum1==sum2) cout<<"Draw"<<nl;
		else if(sum1<sum2) cout<<"Alice"<<nl;
		else if(sum1>sum2) cout<<"Bob"<<nl;
	}
	return 0;
}