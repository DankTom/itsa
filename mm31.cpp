#include<iostream>
using namespace std;

int main()
{
		int i, num, result=0;
		cin >> num;
		for (i=1; i<num; i++)
		{
				if (i%6 == 0)
				{
						if (i%12 != 0)
								result += i;
				}
		}
		cout << result << endl;
		return 0;
}
