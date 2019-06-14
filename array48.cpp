#include<iostream>
using namespace std;

int main()
{
		int num, a, b, c, d;
		cin >> num;
		d = num % 10;
		c = ((num - d) / 10) % 10;
		b = ((num - d - c*10) / 100 ) % 10;
		a = (num - d - c*10 - b*100) / 1000;
		cout << (c+7)%10 << (d+7)%10 << (a+7)%10 << (b+7)%10 << endl;
		return 0;
}
