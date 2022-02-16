#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double a;
    cin >> a;
    cout << fixed;
    cout.precision(7);
    cout << 4 * sqrt(a) << '\n';
}