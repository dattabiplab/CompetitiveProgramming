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
		int d,l,r; cin>>d>>l>>r;
		if(d>=l && d<=r) cout<<"Take second dose now"<<nl;
		else if(d>l && r<d) cout<<"Too Late"<<nl;
		else cout<<"Too Early"<<nl;
	}
	return 0;
}