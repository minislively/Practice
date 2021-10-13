#include <iostream>
using namespace std;

long long int d[70];

long long int fibonacci(int n)
{
    d[0] = 1;
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    for (int i = 4; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i - 2] + d[i-3] + d[i-4];
    }
    return d[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << fibonacci(n) << '\n';
    }
}