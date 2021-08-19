#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str[100];

	for (int i = 0; i < 100; i++)
	{
		getline(cin, str[i]); // 공백 포함해서 출력 
	}
	for (int i = 0; i < 100; i++)
	{
		cout << str[i] << endl; // 공백만 출력 가능 
	}
}