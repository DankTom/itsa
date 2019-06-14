#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
		int i, cnt[26]={0};
		char c;
		while ( (c = getchar()) != EOF)
		{
				if (c>='a' && c<='z')
						++cnt[c - 'a'];
				else if (c>='A' && c<='Z')
						++cnt[c - 'A']; 
		}
		for (i=0; i<25; i++)
				cout << cnt[i] << " ";
		cout << cnt[25] << endl;
		return 0;
}
