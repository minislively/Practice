#include <iostream>
using namespace std;

int main()
{
    int a, even=0, odd=0; 

	for (int i = 0; i < 10; i++)
	{
		cin >> a; 
		if (a % 2 == 0)
			even++;
		else
			odd++;
	}
	cout << "even : " << even << endl;
	cout << "odd : " << odd << endl;
}