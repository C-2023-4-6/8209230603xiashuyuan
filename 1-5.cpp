#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double F=0;
	cout << "你输入的华氏温度为：" << endl;
	cin >> F;
	double C = 5 * (F - 32) / 9;
	cout << "输出的摄氏温度为：" << setprecision(4) <<C<< endl;
	return 0;
	
}