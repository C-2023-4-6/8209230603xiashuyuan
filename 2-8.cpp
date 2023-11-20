#include<iostream>
using namespace std;
int main()
{


	double a;
	cout << "a=" << endl;
	cin >> a;
	double x, x1, t;
	x = a;
	do {
		x1 = (x + a / x) / 2;
		t = x;
		x = x1;
		x1 = t;

	} while (fabs(x - x1) > 1e-5);
	cout << x << endl;
	return 0;

}