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
	int T;
	cin>>T;
	while (T--)
	{
		string a,b;
		cin>>a>>b;
		int a1,b1;
		a1=stoi(a);b1=stoi(b);
		int sum=a1+b1;
		string sum_str=to_string(a1+b1);
		//cout<<sum_str<<nl;
		int ans=0;
		f(sum_str.size()){
			if(sum_str[i]=='0') ans+=6;
			else if(sum_str[i]=='1') ans+=2;
			else if(sum_str[i]=='2') ans+=5;
			else if(sum_str[i]=='3') ans+=5;
			else if(sum_str[i]=='4') ans+=4;
			else if(sum_str[i]=='5') ans+=5;
			else if(sum_str[i]=='6') ans+=6;
			else if(sum_str[i]=='7') ans+=3;
			else if(sum_str[i]=='8') ans+=7;
			else if(sum_str[i]=='9') ans+=6;
		}
		cout<<ans<<nl;
	}
	return 0;
}