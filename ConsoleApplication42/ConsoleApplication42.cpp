#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, n=0, x=0, y=0;

    cin >> a >> b >> c >> d >> e;

    if (a < 0)
    {
      cout << -a * c + d + e * b;
    }
    else if (a > 0)
    {
        cout << (b - a) * e;
    }

}