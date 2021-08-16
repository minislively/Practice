#include <iostream>
using namespace std;

int main()
{
	int a, b, sum = 0;

	double avg = 0, n=0;

	cin >> a >> b;
	if (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum += i;
				n++;
			}
		}
	}
	else if ( b <= a)
	{
		for (int i = b; i <= a; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum += i;
				n++;
			}
		}
	}
	avg = sum / n;
	cout << "sum : " << sum << endl;
	cout << fixed;
	cout.precision(1);
	cout << "avg : " << avg << endl;
}