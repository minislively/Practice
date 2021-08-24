#include <iostream>
using namespace std;

int main()
{
    int arr[100];
	int max=0, min=999;

	for (int i = 0; i < 100; i++)
	{
		cin >> arr[i];

		if (arr[i] == 999)
			break;

		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	cout << "max : " << max << endl;
	cout << "min : " << min << endl;
}