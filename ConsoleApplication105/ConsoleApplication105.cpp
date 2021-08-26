#include <iostream>
using namespace std;

int main()
{
    int arr[5][4];
	int sum[5] = { 0, };
	int max = 0, n=0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
			sum[i] = sum[i] + arr[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (max < sum[i])
		{
			max = sum[i];
			n = i+1;
		}
	}
	cout << n << " " << max;
}