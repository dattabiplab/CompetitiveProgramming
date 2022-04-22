#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a,b,c,it,amt;
int smallest(int a,int b,int c){
	multiset<int> s;
		s.insert(a);
		s.insert(b);
		s.insert(c);
		auto first_it=(s.begin());
		int it=(*first_it);
		amt=((a+b+c)-it);
	return amt;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		smallest(a,b,c);
		cout<<amt<<endl;
	}
	return 0;
}