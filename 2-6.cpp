
#include <iostream>
using namespace std;
int main()

{
	int a, b, c, d;
	cout << "�������a=" << endl;
		cin >> a;
		cout << "�������b = " << endl;
		cin >> b;
		c = (a > b)?a:b;
		d = a + b - c;
		while (a % d != 0 || b % d != 0)
		{
			d--;
		}
		while (c % a != 0 || c % b != 0)
		{
			c++;
		}
		cout << "���Լ��d=" << d<<endl;
		cout << "��С��Լ��c=" << c << endl;
		return 0;


}