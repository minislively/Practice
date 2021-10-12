#include <iostream>
#include <algorithm>
using namespace std;

// 조합 중 이항계수를 구하는 공식 : n!/((n-m)!*m!)
// 조합은 2의 개수와 5의 개수를 동시에 세야 함. 
int main()
{
    long long two = 0, five = 0; // 2의 개수, 5의 개수 
    long long n, m;
    cin >> n >> m;
    for (long long i = 2; i <= n; i*=2)
    {
        two += n / i;
    }
    for (long long i = 2; i <= n-m; i*=2)
    {
        two -= (n - m) / i;
    }
    for (long long i = 2; i <= m; i*=2)
    {
        two -= m / i;
    }
    for (long long i = 5; i <= n; i*=5)
    {
        five += n / i;
    }
    for (long long i = 5; i <= n-m; i*=5)
    {
        five -= (n-m) / i;
    }
    for (long long i = 5; i <= m; i*=5)
    {
        five -= m / i;
    }
    cout << min(two, five) << '\n';
    return 0;
}