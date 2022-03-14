#include<iostream>
using namespace std;
int main() {
    int x, l, r, min = 0, s = 0, y = 0;
    cin >> x >> l >> r;
    if (x <= l)
        cout << l << '\n';
    else if (x >= r)
        cout << r << '\n';
    else
        cout << x << '\n';
}