#include <iostream>
using namespace std;

int main()
{
    int a, b, sum1 = 0, sum2 = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> a; 
		sum1 += a; 
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> b;
		sum2 += b;
	}

	if (sum1 >= sum2)
		cout << sum1;
	else
		cout << sum2;
}