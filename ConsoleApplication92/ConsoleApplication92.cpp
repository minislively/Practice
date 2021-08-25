#include <iostream>
using namespace std;

int main()
{
    int arr[100];
	int n = 0;
	for (int i = 0; i < 100; i++)
	{
		cin >> arr[i];

		if (arr[i] == 0)
		{
			break;
		}
		n++;
	}
	cout << n << endl;

	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == 0)
			break;

		if (arr[i] % 2 == 0)
		{
			arr[i] = arr[i] / 2;
			cout << arr[i] << " ";
		}
		else
		{
			arr[i] = arr[i] * 2;
			cout << arr[i] << " ";
		}
	}
}