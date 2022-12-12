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
		string s;
		getline(cin,s);

		// f(s.length()){
		// 	if(s[i]=='0') cout<<"o";
		// 	else if(s[i]=='1') cout<<"i";
		// 	else if(s[i]=='3') cout<<"e";
		// 	else if(s[i]=='4') cout<<"a";
		// 	else if(s[i]=='5') cout<<"s";
		// 	else if(s[i]=='7') cout<<"t";
		// 	else if(s[i]==' ') cout<<" ";
		// }
		cout<<s;
		cout<<nl;
	}
	return 0;
}