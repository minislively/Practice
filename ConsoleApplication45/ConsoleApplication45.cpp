#include <iostream>
using namespace std;

int main()
{
    int n, a=0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a == 5)
				a = 0;
			
			cout << 2 * ++a - 1 << " ";
		}
		cout << endl;
	}
}