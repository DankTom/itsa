#include<iostream>
using namespace std;

int main()
{
		int i, num, flag, cnt=0;
		cin >> num;
		flag = num/35;
		for (i=1; i<num; i++)
		{
				if ((i%35) == 0)
				{
						cout << i;
						cnt++;
						if (cnt == flag)
								break;
						cout << " ";
				}
		}
		cout << endl;
		return 0;
}
