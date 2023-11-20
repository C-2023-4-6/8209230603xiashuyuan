
#include <iostream>
using namespace std;
int main()

{
	int a, b, c, d;
	cout << "你输入的a=" << endl;
		cin >> a;
		cout << "你输入的b = " << endl;
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
		cout << "最大公约数d=" << d<<endl;
		cout << "最小公约数c=" << c << endl;
		return 0;


}