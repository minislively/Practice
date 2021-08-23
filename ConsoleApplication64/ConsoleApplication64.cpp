#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int odd = 0, even = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];

		if (i % 2 == 0) // 0, 2, 4 등 짝수 번호를 가진 배열 -> 실상 홀수 자리
			even = even + arr[i];
		else // 1 3 5 등 홀수 번호를 가진 배열 -> 실상 짝수 자리
			odd = odd + arr[i];
	}
	cout << "odd : " << even << endl;
	cout << "even : " << odd << endl;
}