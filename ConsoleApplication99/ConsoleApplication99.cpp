#include <iostream>
using namespace std;

int main()
{
    int arr[20];
	int a, temp=0;

	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = i+1; j < a; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < a; i++)
	{
		cout << arr[i] << endl;
	}
}