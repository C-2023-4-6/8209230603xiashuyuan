#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double F=0;
	cout << "������Ļ����¶�Ϊ��" << endl;
	cin >> F;
	double C = 5 * (F - 32) / 9;
	cout << "����������¶�Ϊ��" << setprecision(4) <<C<< endl;
	return 0;
	
}