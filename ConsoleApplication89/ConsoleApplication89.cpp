#include <iostream>
using namespace std;

int main()
{
    int a1, b1, c1;
    int a2, b2, c2;

    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    if (a1 == b1)
    {
        if (a2 == b2)
            cout << c1 << " " << c2;
        else if (a2 == c2)
            cout << c1 << " " << b2;
        else if (b2 == c2)
            cout << c1 << " " << a2;
    }
    else if (b1 == c1)
    {
        if (a2 == b2)
            cout << a1 << " " << c2;
        else if (a2 == c2)
            cout << a1 << " " << b2;
        else if (b2 == c2)
            cout << a1 << " " << a2;
    }
    else if (a1 == c1)
    {
        if (a2 == b2)
            cout << b1 << " " << c2;
        else if (a2 == c2)
            cout << b1 << " " << b2;
        else if (b2 == c2)
            cout << b1 << " " << a2;
    }
}