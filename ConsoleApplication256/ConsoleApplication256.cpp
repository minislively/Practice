#include<iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    cout << ((n - 1) * (n - 2) * (2 * n - 3) + 3 * (n - 1) * (n - 2)) / 12 << '\n';
    cout << 3 << '\n';
}