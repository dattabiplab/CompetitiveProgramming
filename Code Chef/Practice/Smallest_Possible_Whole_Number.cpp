#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define nl '\n'
const int M=1e9+7;
ll n, k;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	while (T--)
	{
		cin >> n >> k;
		if(k==0) cout<<n<<nl;
		else cout<<n%k<<nl;
	}
	return 0;
}