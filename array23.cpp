#include<iostream>
#include<string.h>
using namespace std;

int main()
{
		char tar[120], word[120], *loc;
		cin >> word;
		cin >> tar;
		loc = strstr (tar, word);

		if (loc == NULL)
				cout << "NO" << endl;
		else
				cout << "YES" << endl;
		return 0;
}
