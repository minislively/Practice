#include <iostream>
using namespace std;

int main()
{
    int a; 

    cin >> a;
    if (a == 1)
    {
        cout << "*";
    }
    else
    {
        for (int i = 1; i < a; i++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (int i = 2; i < a; i++)
    {
        for (int j = i; j < a; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int k = 2; k < 2*i-1; k++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    if (a >= 2)
    {
        for (int i = 1; i <= 2 * a - 1; i++)
        {
            cout << "*";
        }
    }
}