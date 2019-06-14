#include <iostream>
using namespace std;
int main()
{
		int h1,h2,m1,m2,time,total=0;
		cin >> h1 >> m1;
		cin >> h2 >> m2; 
		time = 60*h2 + m2 - 60*h1 - m1;
		if (time <= 120)
		{
				total=(time/30)*30;
				cout << total << endl;
		}
		else if (time>120 && time<=240)
		{
				total=((time/30)-4)*40+120;
				cout << total << endl;
		}
		else
		{
				total=((time/30)-8)*60+280;
				cout << total << endl;
		}
		return 0;
}
