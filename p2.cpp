#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;

#define mp make_pair
#define pob pop_back
#define f(n) for(int i=0;i<n;i++)
#define in(n,a) for(int i=0;i<n;i++) cin>>a[i];
#define i(a,b,c) ll a,b,c; cin>>a>>b>>c;
#define nl "\n"

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,num;cin>>n;
    vector<pair<pair<int,int>,string>> vec;
  	for(int i=0;i<n;i++){
  		int x,y;string z;cin>>x>>y>>z;
  		vec.push_back({{x,y},{z}});
  		// num+=1;
  		// vec.pob();
  		//vec.push_back(num);
  	} 
  	//vec.push_back(7);
    for(int i=0;i<vec.size();i++) cout<<vec[i].first.first<<" "<<vec[i].first.second<<" "<<vec[i].second<<nl;
//     vector<int> g1;
//     int n,a;
// for(int i=0;i<n;i++)
// {
//   cin>>a;
//   g1.push_back(a);
// }
// for(int i=0;i<g1.size();i++){
// 	cout<<g1[i]<<" ";
// }
    return 0;

} 