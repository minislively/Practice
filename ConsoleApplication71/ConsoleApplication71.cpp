#include <iostream>
using namespace std;

int main()
{
    double x, sum = 0;

	for (int i = 0; i < 6; i++)
	{
		cin >> x;

		sum = sum + x;
	}
	cout << fixed;
	cout.precision(1);
	cout << sum/6;
}