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
		int n,first_digit,last_digit;
		cin>>n;
		first_digit=n%10;
		while(n>=10){
			n/=10;
		}
		last_digit=n;
		cout<<first_digit+last_digit<<nl;
	}
	return 0;
}