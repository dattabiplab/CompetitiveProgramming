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
		int a,b,c,d,k,dis;cin>>a>>b>>c>>d>>k;
		dis=abs(a-c)+abs(b-d);
		if(k>=dis && k%2==dis%2) cout<<"YES"<<nl;
		else cout<<"NO"<<nl;
	}
	return 0;
}