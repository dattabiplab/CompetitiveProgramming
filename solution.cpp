#include <bits/stdc++.h>
using namespace std;

void swapping(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return;
}

int main()
{
	int a,b;
	cin>>a>>b;
	swapping(&a,&b);
	cout<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
	swapping(&a,&b);
	cout<<a<<" "<<b;
	return 0;
}