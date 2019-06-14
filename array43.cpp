#include<iostream>
#include<math.h>
using namespace std;

int main()
{
		int i, a, b, result;
		while (cin >> a >> b)
		{
				result = 1;
				for (i=0; i<b; i++)
				{
						result = result * a;
				}
				cout << result << endl;
		}
		return 0;
}
