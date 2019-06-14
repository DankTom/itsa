#include<iostream>
using namespace std;

int main()
{
		int i, a, b, total, tmp;
		cin >> a >> b;
		if (a > b)
		{
				tmp = a;
				a = b;
				b = tmp;
		}
		for(i=a; i<=b; i++)
		{
				total += i;
		}
		cout << total << endl;
		return 0;
}
