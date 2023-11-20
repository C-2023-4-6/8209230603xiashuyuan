#include<iostream>
using namespace std;
int main()
{
	double a;
	double b;
	cout << "你输入的a=" << endl;
	cin >> a;
	cout << "你输入的b=" << endl;
	cin >> b;
	if (a + b)
		cout << " a + b =" <<a+b<< endl;
	if (a - b)
		cout << "a - b =" <<a-b<<endl;
	if (a * b)
		cout << "a*b=" <<a*b<< endl;
	if (a / b)
	{
		if (b == 0)
			cout << "error" << endl;
		else
			cout << "a/b=" << a / b << endl;

	}
	int c, d;
	c = (int)a;
	d = (int)b;
		cout << "c%d=" <<c%d<< endl;
	return 0;






}
