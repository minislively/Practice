#include <iostream>
using namespace std;

int main()
{
    long long N, M;

    cin >> N >> M;

    if (N < 0 && M >0)
        cout << -N + M;
    else if (N < 0 && M < 0)
        cout << -N - M;
    else if (N > 0 && M > 0)
        cout << N - M;
    else if (N > 0 && M < 0)
        cout << N + M;
    else if (N == M)
        cout << 0;
        
}