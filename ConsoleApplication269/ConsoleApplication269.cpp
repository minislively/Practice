#include<iostream>
using namespace std;
int main() {
    double n;
    cin >> n;
    double m = 25 + n * 0.01;
    if (m >= 100)
        m = m;
    else
        m = 100.00;
    if (m < 2000)
        m = m;
    else
        m = 2000;
    cout << fixed;
    cout.precision(2);
    cout << m << '\n';
}