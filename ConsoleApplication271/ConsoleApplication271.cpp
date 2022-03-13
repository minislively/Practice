#include<iostream>
#include<cmath>
using namespace std;
const double PI = 3.14159265359;
int main() {
    double a;
    cin >> a;
    double m = sqrt(a / PI) * 2 * PI;
    cout << fixed;
    cout.precision(6);
    cout << m << '\n';
}