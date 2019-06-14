#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

int main()
{
		int i, size, flag;
		string input;
		while (cin >> input)
		{
				flag = 1;
				size = input.size();
				char cmp[size];
				strcpy (cmp, input.c_str());
				for (i=0; i<floor(size/2); i++)
				{
						if (cmp[i] != cmp[size-1-i])
								flag = 0;
				}
				if (flag == 1)
						cout << "YES" << endl;
				else 
						cout << "NO" << endl;
		}
		return 0;
}
