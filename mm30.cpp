#include<iostream>
#include<math.h>
using namespace std;

int is_prime(long int);

int main()
{
		long int num;
		cin >> num;
		if (is_prime(num))
				cout << "YES" << endl;
		else
				cout << "NO" << endl;
		return 0;
		
}
int is_prime(long int num)
{
		int i, max;
		max = sqrt(num);
		for (i=2; i<max; i++)
		{
				if (num%i == 0)
						return 0;
		}
		return 1;
}
