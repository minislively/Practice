﻿#include <iostream>
using namespace std;

int main()
{
    int a, sum = 0;

    cin >> a; 

    for (int i = 0; i <= a; i++)
    {
        if ( i%5==0)
            sum += i;
    }
    cout << sum;
}