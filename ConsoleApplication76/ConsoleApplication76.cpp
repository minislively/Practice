﻿#include <iostream>
using namespace std;

int main()
{
    int a;

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int k = i; k < a; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 2; i <= a; i++)
    {
        for (int k = 2; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = 2*i-1; j <= 2*a-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}