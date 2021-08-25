#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int a;

    cin >> a; 

    arr[0] = 100;
    arr[1] = a;

    for (int i = 0; i < 100; i++)
    {
        cout << arr[i] << " ";

        arr[i+2] = arr[i] - arr[i+1];

        if (arr[i] < 0)
            break;

    }
}