#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,num,num1;
		cin>>a;
		num=a/10;
		num1=num*10;
		if(a==num1){
			cout<<num<<endl;
		}
		else if(a>=num1){
			cout<<num+1<<endl;
		}
	}
	return 0;
}