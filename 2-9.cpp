#include<iostream>
using namespace std;
int main()
{
	   int num, sum, d;
	   d = 0;
	   sum = 0;
	   for (int i = 2; i <= 100; i = 2 * i)
	   {
		   num = i; sum = sum + num;
		   d++;
	   }
	   cout << 0.8 * sum / d << endl;
	   return 0;
   }


