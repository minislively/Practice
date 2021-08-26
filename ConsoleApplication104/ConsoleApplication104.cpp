#include <iostream>
using namespace std;

int main()
{
    int arr[10];
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];

		if (arr[0] != arr[i])
			sum = sum + arr[i];
	}
	cout << arr[0] - sum;

}