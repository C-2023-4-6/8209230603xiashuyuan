#include<iostream>
using namespace std;
int main()
{
	char c;
	int el = 0, sp = 0, nu = 0, other = 0;
	while (cin.get(c))
	{
		if (c == '\n')
			break;
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			el++;
		else if (c >= '0' && c <= '9')
			nu++;
		else if (c == ' ')
			sp++;
		else
			other++;
	}
	cout << "Ӣ����ĸ����=" << el << endl << "���ָ���=" << nu << endl << "�ո�����=" << sp << endl << "�����ַ�����=" << other << endl;
	system("pause");
	return 0;
}


