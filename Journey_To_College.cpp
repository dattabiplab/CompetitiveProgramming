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
	int s,d;
	cin>>s>>d;
	if(s+d<21){
		cout<<"YES";
	}
	else if(s+d>=21){
		cout<<"NO";
	}
	return 0;
}