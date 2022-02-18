#include <iostream>
using namespace std;

int main()
{
	long long int N;
	cin >> N;
	long long int a[N];
	long long int pdt = 1;
	for (int i = 1; i <= N; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= N; i++)
	{
		pdt *= a[i];
	}
	cout << pdt;
	return 0;
}