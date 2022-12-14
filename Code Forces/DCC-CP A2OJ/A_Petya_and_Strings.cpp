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
	string s1,s2;
	cin>>s1;
	cin>>s2;
	for(int i=0;i<s1.length();++i){
		s1[i]=tolower(s1[i]);
		s2[i]=tolower(s2[i]);
	}
	if(s1<s2){
		cout<<"-1";
	}
	else if(s1>s2){
		cout<<"1";
	}
	if(s1==s2){
		cout<<"0";
	}
	return 0;
}