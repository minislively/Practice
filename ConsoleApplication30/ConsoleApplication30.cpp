#include <iostream>
using namespace std;

int main()
{
    int a, sum = 0, n=0;

	for (int i = 0; i < 20; i++)
	{
		cin >> a;
		
		if (a == 0)
			break;
		sum = sum + a; 
		n++;
	}
	cout << sum << " " << sum / n;
}