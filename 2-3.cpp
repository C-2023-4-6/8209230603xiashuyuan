#include<iostream>
	using namespace std;
	int main()
	{   int a = 0;
		int b;
		int c;
		cout << "你输入的a=" << endl;
		cin >> a;
		cout << "你输入的b=" << endl;
		cin >> b;
		cout << "你输入的c=" << endl;
		cin >> c;
		int C = a + b + c;

		if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
			cout << "该三角形的周长C=" << C << endl;
			if ((a == b) || (a == c) || (b == c))
			{
				cout << "为等腰三角形" << endl;
			}
			else {
				cout << "为普通三角形" << endl;
			}
		}
		else {
			cout << "不为三角形" << endl;
		}
		
		return 0;
	}
		
	
	


	
