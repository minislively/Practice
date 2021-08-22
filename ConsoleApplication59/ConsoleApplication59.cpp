#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0};
	int s1 = 0, s2 = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	s2 = arr[1] + arr[3] + arr[5] + arr[7] + arr[9];
	s1 = arr[0] + arr[2] + arr[4] + arr[6] + arr[8];
 
	cout << "sum : " << s2 << endl;
	cout << "avg : ";
	cout << fixed;
	cout.precision(1);
	cout << (double)s1 / 5 << endl;
}