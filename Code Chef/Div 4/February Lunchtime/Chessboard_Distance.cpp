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
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		int X1=abs(x1-x2);
		int Y1=abs(y1-y2);
		int m=max(X1,Y1);
		cout<<m<<endl;
	}
	return 0;
}