#include <iostream>
using namespace std;

int main()
{
    long long n, m, k, x=0, y=0;

    cin >> n >> m >> k;

    x = m > k ? k : m;
    y = (n - m) > (n - k) ? (n - k) : (n - m);

    cout << x + y;
}