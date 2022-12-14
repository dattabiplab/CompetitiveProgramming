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
		int w1,w2,x1,x2,m;cin>>w1>>w2>>x1>>x2>>m;
		int incWt=w2-w1;
		if(x1*m<=incWt && incWt<=x2*m) cout<<"1"<<nl;
		else cout<<"0"<<nl;
	}
	return 0;
}