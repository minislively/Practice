#include <iostream>
using namespace std;

int main()
{
    int arr[5]; 
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		if (i==0 || i==2||i==4)
		{
			sum += arr[i];
		}
	}
	cout << sum;
}
