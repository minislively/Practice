#include<iostream>
using namespace std;
int main() {
    double a, b, c, x, y;
    cin >> a >> b >> c;
    x = a * b / c;
    y = a / b * c;
    if (x > y) cout << (int) x << '\n';
    else cout << (int) y << '\n';
}