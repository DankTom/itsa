#include<iostream>
using namespace std;

int gcd(int m, int n)
{
		while (n != 0)
		{
				int r = m%n;
				m = n;
				n = r;
		}
		return m;
}
int main()
{
		int a, b;
		cin >> a >> b;
		cout << gcd(a, b) << endl;
		return 0;
}
