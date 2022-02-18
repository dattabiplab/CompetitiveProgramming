#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a;
	long long int b;
	char ch;
	float f;
	long double d;
	cin >> a >> b >> ch >> f >> d;
	cout << a << endl;
	cout << b << endl;
	cout << ch << endl;
	cout << fixed;
	cout << setprecision(3) << f << endl;
	cout << fixed;
	cout << setprecision(9) << d << endl;

	return 0;
}