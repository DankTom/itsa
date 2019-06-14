#include<iostream>
using namespace std;

int is_prime(int);

int main()
{
	int i, num;
	cin >> num;
	for (i=num-1; i>0; i--)
	{
			if (is_prime(i))
			{
					cout << i << endl;
					break;
			}
	}
	return 0;
}

int is_prime(int num)
{
		int i;
		for (i=2; i<num; i++)
		{
				if (num%i == 0)
						return 0;
		}
		return 1;
}
