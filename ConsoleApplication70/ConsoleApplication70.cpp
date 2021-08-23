#include <iostream>
using namespace std;

int main()
{
    int a; 

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int m = 2*i; m < 2*a; m++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;

    }
    for (int i = 1; i < a; i++)
    {
        for (int j = i; j < a; j++)
        {
            cout << "*";
        }
        for (int m = 1; m <= 2*i; m++)
        {
            cout << " ";
        }
        for (int k = i; k < a; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}