#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		for(int i=1;i<=t+1;i++){
			cin>>n;
			if(n>=35 && n<=65){
				cout<<"Normal"<<endl;
				break;
			}
			else if(n>65){
				cout<<"Overload"<<endl;
				break;
			}
			else if(n<35){
				cout<<"Underload"<<endl;
				break;
			}
			else{
				cout<<"None"<<endl;
				break;
			}
		}
	}
	return 0;
}