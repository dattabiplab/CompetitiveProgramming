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
	string s1,s2;
	cin>>s1>>s2;
	int a,b,sum1=0,sum2=0;
	for(int i = 0;i<3;i++){
		cin>>a>>b;
		sum1+=a;sum2+=b;
	}
	if(sum1>=sum2) cout<<"Syracuse"<<nl;
	else cout<<"Duke"<<nl;
	return 0;
}