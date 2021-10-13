#include <iostream>
using namespace std;

long long int d[90];

long long int fibonacci(int n)
{
    d[0] = 0;
    d[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i - 2];
    }
    return d[n];
}

int main()
{
    int n;

    cin >> n;
    cout << fibonacci(n);
}