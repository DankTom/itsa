#include<iostream>
using namespace std;

int main()
{
		long int input;
		int day, hr, min, sec;
		cin >> input;
		day = input /60 /60 /24;
		input -= day *24 *60 *60;
		hr = input /60 /60;
		input -= hr *60 *60;
		min = input /60;
		sec = input - min*60;
		cout << day << " days" << endl;
		cout << hr << " hours" << endl;
		cout << min << " minutes" << endl;
		cout << sec << " seconds" << endl;
		return 0;
}
