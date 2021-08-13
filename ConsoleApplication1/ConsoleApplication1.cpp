#include <iostream>
using namespace std;

int main()
{
    int a = 0, n=0, m=0;

	for (int i = 0; i < 10; i++)
	{
		cin >> a; 
		if (a % 3 == 0)
			++n;
		if (a % 5 == 0)
			++m;
	}
	cout << "Multiples of 3 : " << n << endl;
	cout << "Multiples of 5 : " << m << endl;

}