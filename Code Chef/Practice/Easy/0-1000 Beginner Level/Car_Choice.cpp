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
		float x1,x2,y1,y2;
		cin>>x1>>x2>>y1>>y2;
		if((y1/x1) <(y2/x2)){
			cout<<"-1"<<nl;
		}
		else if((y1/x1) >(y2/x2)){
			cout<<"1"<<nl;
		}
		else if((y1/x1) ==(y2/x2)){
			cout<<"0"<<nl;
		}
	}
	return 0;
}