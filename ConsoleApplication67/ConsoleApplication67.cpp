#include <iostream>
using namespace std;

int main()
{
    long long a, sum=1;

	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		sum = sum * i;
	}
	cout << sum;
}