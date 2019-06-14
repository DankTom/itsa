#include <iostream> 

using namespace std;

int main()
{
	int  b[100], a, i = 0;

	while (cin >> a)
	{
		b[i] = a;
		i++;
	}
	while (i > 0) {
		i--;
		cout << b[i];
		if (i != 0) cout << " ";
		if (i == 0) cout << endl;
	}
	return 0;
}
