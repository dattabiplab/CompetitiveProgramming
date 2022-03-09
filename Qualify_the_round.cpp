#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define nl '\n'
int B;
int A(int *,int *,int *){
	int B=((a*1) + (b*2));
	if(((a*1) + (b*2))>=x){
			cout<<"Qualify"<<nl;
		}
	else if(B<x){
			cout<<"NotQualify"<<nl;
		}
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while (T--)
	{
		int x,a,b; cin>>x>>a>>b;
		A(&a,&b,&x);
	}
	return 0;
}