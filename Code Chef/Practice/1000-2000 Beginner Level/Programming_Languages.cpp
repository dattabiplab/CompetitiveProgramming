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
		int a[3][2];
		for(int i=0;i<3;i++) cin>>a[i][0]>>a[i][1];
		if((a[0][0]==a[1][0] ||a[0][0]==a[1][1])&&(a[0][1]==a[1][0] ||a[0][1]==a[1][1])) cout<<"1"<<nl;
		else if((a[0][0]==a[2][0] ||a[0][0]==a[2][1])&&(a[0][1]==a[2][0] ||a[0][1]==a[2][1])) cout<<"2"<<nl;
		else cout<<"0"<<nl;
	}
	return 0;
}