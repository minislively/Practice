#include <iostream>
using namespace std;

int main()
{
    int a;

    cin >> a;
    
    for (int i = 1; i < a; i++)
    {
        cout << " ";
    }
    for (int i = 1; i <= 1; i++)
    {
        cout << "*";
    }
    cout << endl;

    for (int i = 1; i <= a-2; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 1; k++)
        {
            cout << "*";
        }
        for (int m = 1; m <= 2*a-1; m++)
        {
            cout << " ";
        }
        for (int n = 0; n < 1; n++)
        {
            cout << "*";
        }
        cout << endl;
    }
    if (a >= 2)
    {
        for (int i = 1; i <= 2 * a - 1; i++)
        {
            cout << "*";
        }
    }
}