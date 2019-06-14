#include<iostream>
using namespace std;

int main()
{
		int i, j, a, b, matrix[100][100];
		cin >> a >> b;
		for (i=0; i<a; i++)
		{
				for (j=0; j<b; j++)
						cin >> matrix[i][j];
		}
		for (i=0; i<b; i++)
		{
				for (j=0; j<a-1; j++)
						cout << matrix[j][i] << " ";
				cout << matrix[j][i];
				cout << endl;
		}
		return 0;
}
