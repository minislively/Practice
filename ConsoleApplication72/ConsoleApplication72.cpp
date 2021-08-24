#include <iostream>
using namespace std;

int main()
{
	char ch[6] = { 'J', 'U', 'N', 'G', 'O', 'L'};
	char ch1;

	cin >> ch1;

	if (ch1 == 'J')
		cout << "0";
	else if (ch1 == 'U')
		cout << "1";
	else if (ch1 == 'N')
		cout << "2";
	else if (ch1 == 'G')
		cout << "3";
	else if (ch1 == 'O')
		cout << "4";
	else if (ch1 == 'L')
		cout << "5";
	else
		cout << "none";
}