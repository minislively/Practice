#include <iostream>
using namespace std;

int main()
{
    int a;

	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		for (int j = 2*i; j < 2*a; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << k << " ";
		}
		cout << endl;
	}
}