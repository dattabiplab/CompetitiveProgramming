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
		int n,counter=0;cin>>n;
		while(n>0){
			if(n%10==4){
				counter++;
			}
			n/=10;
		}
		cout<<counter<<nl;
	}
	return 0;
}