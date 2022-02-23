#include <iostream>
using namespace std;

int main(){
	int t; 
	cin>>t;
	while(t--){
		int a,b,num;
		cin>>a>>b;
		num=21-(a+b);
		if(num>10){
			cout<<(-1)<<endl;
		}
		else if(num<=10){
			cout<<num<<endl;
		}
	}
	return 0;
}