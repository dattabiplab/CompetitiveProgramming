#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
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
		float s,a,b,c;cin>>s>>a>>b>>c;
		float s1=s+(0.01*s*c);
		if(a<=s1 && s1<=b) cout<<"Yes"<<nl;
		else cout<<"No"<<nl;
	}
	return 0;
}