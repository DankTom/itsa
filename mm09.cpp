#include<iostream>
#include<math.h>
using namespace std;

int main()
{
		int a;
		long int b;
		while (cin >> a)
		{
				if (a < 31)
				{
					b = pow(2, a);
					cout << b << endl;
				}
				else 
						cout << "Value of more than 31" << endl;
		}
		return 0;
}
