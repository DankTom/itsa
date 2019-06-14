#include<iostream>
using namespace std;

int main()
{
		int i, num, a, b, c;
		cin >> num;
		c = num%10;
		a = num/100;
		b = (num - c - a*100) / 10;
		a = a*a*a;
		b = b*b*b;
		c = c*c*c;
		if ((a+b+c) == num)
				cout << "Yes" << endl;
		else
				cout << "No" << endl;
		return 0;
}
