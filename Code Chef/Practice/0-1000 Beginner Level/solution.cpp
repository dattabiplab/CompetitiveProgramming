#include <iostream>
using namespace std;

int isPrime(int n){
	if (n==1) return false;
	if(n==2 ||n==3) return n;
	if(n%2==0 || n%3==0) return false;
	for (int i=5; i*i<=n;i+=6){
		if(n%i==0 || n%(i+2)==0) return n;
	}
	return true;
}

int primeFactors(int n){
	for(int i=2;i<n;i++){
		if(isPrime(i)){
			int x=i;
			while(n%x==0){
				cout<<i<<endl;
				x*=i;
			}
		}
	}
}
int main()
{
	cout<<primeFactors(27);   
    return 0;
}