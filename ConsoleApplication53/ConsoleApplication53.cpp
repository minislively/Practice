#include <iostream>
using namespace std;

int main()
{
    int s, k, h;

    cin >> s >> k >> h;

    if (s + k + h >= 100)
        cout << "OK";

    else if (s + k + h < 100)
    {
        if (s >= h && s >= k && k >= h)
            cout << "Hanyang";
        else if (s >= h && s <= k && k >= h)
            cout << "Hanyang";
        else if (s >= h && s >= k && k <= h)
            cout << "Korea";
        else if (s <= h && s >= k && k <= h)
            cout << "Korea";
        else if (s <= h && s <= k && h <= k)
            cout << "Soongsil";
        else if (s <= h && s<= k && h>= k)
            cout << "Soongsil";
    }
}