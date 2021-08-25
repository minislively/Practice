#include <iostream>
using namespace std;

int main()
{
    int arr[7];
	int min=100, sum=0;

	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 7; i++)
	{

		if (arr[i] % 2 != 0) // 입력한 값이 홀수 값일 때
		{
			sum = sum + arr[i];
			if (arr[i] < min)
				min = arr[i];
		}
	}
	if (sum != 0 && min != 100)
	{
		cout << sum << endl;
		cout << min << endl;
	}
	else
		cout << -1;
}