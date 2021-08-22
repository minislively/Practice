#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d, e, f; 
    long long x = 0, y = 0;

    cin >> a >> b >> c >> d >> e >> f;
    
    x = 3 * a + 2 * b + 1 * c;
    y = 3 * d + 2 * e + 1 * f;

    if (x > y)
        cout << "A";
    else if (x < y)
        cout << "B";
    else
        cout << "T";


}