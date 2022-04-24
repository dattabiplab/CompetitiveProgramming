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
	string s,z;cin>>s;
	for(int i=0;i<s.length()-1;++i){
		for(int j=0;j<s.length()-i-1;++j){
			if(s[j]!='+'){
				if(s[j]>s[j+2]){
					char temp =s[j];
					s[j]=s[j+2];
					s[j+2]=temp;
				}
			}
		}
	}
	cout<<s;
	return 0;
}