#include<iostream>
using namespace std;

int main()
{
		int i, num;
		long int ans = 1;
		cin >> num;
		for (i=1; i<num+1; i++)
		{
				ans *= i;
		}
		cout << ans << endl;
		return 0;
}
