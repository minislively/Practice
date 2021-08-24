#include <iostream>
using namespace std;

int main()
{
    int arr[100];
	int sum = 0, n = 0;

	for (int i = 0; i < 100; i++)
	{
		cin >> arr[i];

		if (arr[i] == 0)
			break;

		if (arr[i] % 5 == 0)
		{
			sum = sum + arr[i];
			n++;
		}
	}
	cout << "Multiples of 5 : " << n << endl;
	cout << "sum : " << sum << endl;
	cout << "avg : ";
	cout << fixed;
	cout.precision(1);
	cout << (double)sum / n << endl;
}