#include<iostream>
using namespace std;
int main() {
    double t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << fixed;
        cout.precision(0);
        cout << (a * a / 2) / (b * b / 2) << '\n';
    }
}