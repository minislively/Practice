#include <iostream>
using namespace std;

int main()
{
    
	int arr[100] = { 0, }; // 배열 할당 

	for (int i = 0; i < 100; i++)
	{

		cin >> arr[i]; // 배열마다 값 집어넣어줌. 
		
		if (arr[i] == 0) // 배열이 0이면 for문 탈출 
			break;
	}
	for (int i = 99 ; i >= 0; i--)
	{
		if (arr[i] == 0)
			continue;

		cout << arr[i] << " ";
	}
}