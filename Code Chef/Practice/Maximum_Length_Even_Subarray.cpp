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
		int n;cin>>n;
		ll sum=((n*n)+n)/2;
		if(sum%2==0) cout<<n<<nl;
		if(sum%2!=0) cout<<n-1<<nl;
	}
	return 0;
}