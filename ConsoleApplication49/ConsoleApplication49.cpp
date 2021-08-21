#include <iostream>
using namespace std;

int main()
{
    char ch[10]; 

	for (int i = 0; i < 10; i++)
	{
		cin >> ch[i];
	}
	cout << ch[0] << " " << ch[3] << " " << ch[6];
}