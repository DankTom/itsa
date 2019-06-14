#include<iostream>
using namespace std;

int main()
{
		int year;
		cin >> year;
		if (year % 12 == 0)
				cout << "monkey\n";
		else if (year % 12 == 1)
				cout << "rooster\n";
		else if (year % 12 == 2)
				cout << "dog\n";
		else if (year % 12 == 3)
				cout << "pig\n";
		else if (year % 12 == 4)
				cout << "rat\n";
		else if (year % 12 == 5)
				cout << "ox\n";
		else if (year % 12 == 6)
				cout << "tiger\n";
		else if (year % 12 == 7)
				cout << "rabbit\n";
		else if (year % 12 == 8)
				cout << "dragon\n";
		else if (year % 12 == 9)
				cout << "snake\n";
		else if (year % 12 == 10)
				cout << "horse\n";
		else if (year % 12 == 11)
				cout << "sheep\n";
		return 0;
}
