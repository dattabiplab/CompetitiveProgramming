#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,x;
        cin>>n>>x;

        ll a[n][2];

        for(ll i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1];
        }
        ll ans=INT_MIN;
        for(ll i=0;i<n;i++){
            if(a[i][0]<=x && a[i][1]>ans){
                ans=a[i][1];
            }
        }
        cout<<ans<<"\n";
    }   
    return 0;
}