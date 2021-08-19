#include <iostream>
using namespace std;

int main()
{
    long double d1, d2, y=0;

    long double x = 3.141592; // 원주율 

    cin >> d1 >> d2;

    y = 2 * (x * d2 + d1);

    cout << fixed;
    cout.precision(6);
    cout << y;
}