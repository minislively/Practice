#include<iostream>
using namespace std;
int main() {
    long long a, b, x = 0, y = 0;
    cin >> a >> b;
    x = (a * (a + 1)) / 2;
    y = (b * (b + 1)) / 2;
    cout << x << '\n';
    cout << y << '\n';
}