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
		i(r1,w1,c1)
		i(r2,w2,c2)
		int count_a=0;int count_b=0;
		if(r1>r2) count_a++;
		else count_b++;
		if(w1>w2) count_a++;
		else count_b++;
		if(c1>c2) count_a++;
		else count_b++;
		if(count_a>count_b) cout<<"A"<<nl;
		else cout<<"B"<<nl;

	// 	 int r,w,c;
	//    int r1,w1,c1;
	//   int v=0;
	//       cin>>r>>w>>c;
	//       cin>>r1>>w1>>c1;
	//      (r>r1)?v++:v--;
	//      (w>w1)?v++:v--;
	//      (c>c1)?v++:v--;
	//       (v>0)?cout<<"A\n":cout<<"B"<<endl;
	}
	return 0;
}