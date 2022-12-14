#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define pob pop_back
#define f(n) for(int i=0;i<n;i++)
#define in(n,a) for(int i=0;i<n;i++) cin>>a[i];
#define vec vector<ll> v
#define i(a,b,c) ll a,b,c; cin>>a>>b>>c;
#define nl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string x,y;
	cin>>x>>y;
	if(x=="R" && (y=="R"|| y=="B" ||y=="G")) cout<<"R"<<nl;
	else if(x=="B" && y=="R") cout<<"R"<<nl;
	else if(x=="B" && (y=="B" ||y=="G")) cout<<"B"<<nl;
	else if(x=="G" && y=="G") cout<<"G"<<nl;
	else if(x=="G" && y=="B") cout<<"B"<<nl;
	else if(x=="G" && y=="R") cout<<"R"<<nl;
	return 0;
}