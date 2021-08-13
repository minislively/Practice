#include <iostream>
using namespace std;

int main()
{
    int K, N, X = 0;
    double M;

    cin >> K >> N >> M;
    X = K * N;

    if (X > M)
        cout << X - M;
    else
        cout << 0;

}