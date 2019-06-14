#include<iostream>
using namespace std;

int main()
{
		int i, num, cnt=0;
		cin >> num;
		for (i=0; i<=num; i++)
		{
				if (i%3 == 0)
						cnt += i;
		}
		cout << cnt << endl;
		return 0;
}
