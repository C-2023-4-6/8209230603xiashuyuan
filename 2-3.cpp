#include<iostream>
	using namespace std;
	int main()
	{   int a = 0;
		int b;
		int c;
		cout << "�������a=" << endl;
		cin >> a;
		cout << "�������b=" << endl;
		cin >> b;
		cout << "�������c=" << endl;
		cin >> c;
		int C = a + b + c;

		if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
			cout << "�������ε��ܳ�C=" << C << endl;
			if ((a == b) || (a == c) || (b == c))
			{
				cout << "Ϊ����������" << endl;
			}
			else {
				cout << "Ϊ��ͨ������" << endl;
			}
		}
		else {
			cout << "��Ϊ������" << endl;
		}
		
		return 0;
	}
		
	
	


	
