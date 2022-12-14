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
		int x;cin>>x;
		if(1<=x&& x<100) cout<<"Easy"<<nl;
		if(100<=x&& x<200) cout<<"Medium"<<nl;
		if(200<=x&& x<=300) cout<<"Hard"<<nl;
	}
	return 0;
}