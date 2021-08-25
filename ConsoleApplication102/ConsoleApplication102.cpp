#include <iostream>
using namespace std;

int main()
{
    int arr[2][4];
    int arr1[2][4];

    cout << "first array" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "second array" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] * arr1[i][j] << " ";
        }
        cout << endl;
    }
}