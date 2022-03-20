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
		char ch;
		cin>>ch;
		ch= tolower(ch);
		if(ch=='b') cout<<"BattleShip"<<nl;
		else if(ch=='c') cout<<"Cruiser"<<nl;
		else if(ch=='d') cout<<"Destroyer"<<nl;
		else if(ch=='f') cout<<"Frigate"<<nl;
	}
	return 0;
}