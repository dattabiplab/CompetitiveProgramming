#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		for(int i=1;i<=t+1;i++)
		{
			cin>>a>>b>>c;
			cout<<(max((a+c),b))<<endl;
			break;
		}
	}
	return 0;
}