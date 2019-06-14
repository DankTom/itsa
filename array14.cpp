#include<iostream> 
using namespace std;

int main()
{
		int i, j, k, a, row, col, bag;
		cin >> a;
		for(k=0; k<a; k++)
		{
				cin >> row >> col >> bag;
				int arr[30][30], rpos, cpos;
				for (i=0; i<col; i++)
				{
						for (j=0; j<row; j++)
						{
								arr[i][j] = 0;
						}
				}
				for (i=0; i<bag; i++)
				{
						cin >> rpos >> cpos;
						rpos -= 1;
						cpos -= 1;
						arr[cpos][rpos] = 1;
						arr[cpos][rpos-1] = 1;
						arr[cpos+1][rpos] = 1;
						arr[cpos][rpos+1] = 1;
						arr[cpos-1][rpos] = 1;
				}
				int result = 1;
				for (i=0; i<col; i++)
				{
						for (j=0; j<row; j++)
						{
								if (arr[i][j] == 0)
										result = 0;
						}
				}
				if (result == 1)
						cout << "Y" << endl;
				else
						cout << "N" << endl;
		}
		return 0;
}
