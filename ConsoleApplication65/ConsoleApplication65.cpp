#include <iostream>

using namespace std;

int main()
{
    int arr[100];

	for (int i = 0; i < 100; i++)
	{
		cin >> arr[i];

		if (arr[i] == -1)
		{
			if(i>=3)
				cout << arr[i - 3] << " " << arr[i - 2] << " " << arr[i - 1];
			else if(i==2)
				cout << arr[i - 2] << " " << arr[i - 1];
			else if (i==1)
				cout << arr[i - 1];

			break;
		}
	}

}