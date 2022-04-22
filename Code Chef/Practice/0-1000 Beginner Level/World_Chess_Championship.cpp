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
		int x;cin>>x;
		string s;cin>>s;
		int c=0;
		int d=0;
		int n=0;
		f(s.size()){
			if(s[i]=='C') c++;
			else if(s[i]=='D') d++;
			else if(s[i]=='N') n++;
		}
		int carlsen_score = c*2+d*1;
		int chef_score = n*2+d*1;
		if(carlsen_score>chef_score) cout<<60*x<<nl;
		else if(carlsen_score<chef_score) cout<<40*x<<nl;
		else if(carlsen_score==chef_score) cout<<55*x<<nl;
	}
	return 0;
}