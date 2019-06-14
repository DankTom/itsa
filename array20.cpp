#include<iostream> 
using namespace std;

int main()
{
		int i, cnt, num, flag = 1, arr[130];
		cin >> cnt;
		for (i=0; i<cnt; i++)
		{
				arr[i] = 0;
		}
		for (i=0; i<cnt; i++)
		{
			cin >> num;
			arr[num-1]++;
		}
		for (i=0; i<cnt; i++)
		{
				if (arr[i] > 1)
						flag = 0;
		}
		if (flag == 1)
				cout << 1 << endl;
		else
				cout << 0 << endl;
		return 0;
}
