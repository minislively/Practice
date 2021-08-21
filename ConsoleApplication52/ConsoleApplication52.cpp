#include <iostream>
using namespace std;

int main()
{
    int arr[10] = { 0, };
	int min = 1000;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];

		if (arr[i] < min)
		{
			min = arr[i];

		}
	}
	cout << min;
}