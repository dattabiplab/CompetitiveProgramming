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
	int x;
	float bal;
	cin >> x>>bal;
	cout<<fixed<<showpoint<<setprecision(2);
	if ((x <= bal-0.5) && (x % 5 == 0))
	{
		cout<<(bal-x-0.50)<<nl;
	}
	else
	{
		cout<<bal<<nl;
	}
	return 0;
}