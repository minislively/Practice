#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, x = 0, y = 0, z = 0;

    cin >> a >> b >> c >> d >> e;

    x = a * e; // x 사에서 한 달 간 사용한 수도 요금 금액 

    if (c >= e) // y사에서 한 달 간 사용한 수도 요금 금액 
        y = b;
    if (e > c)
    {
        z = e - c;
        y = b + z * d;
    }

    if (x > y)
        cout << y;
    else
        cout << x;
}