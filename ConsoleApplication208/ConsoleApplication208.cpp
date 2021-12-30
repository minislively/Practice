#include<iostream>
using namespace std;
int main() {
    int r;
    long double pi = 3.1415926535897932;
    cin >> r;
    cout << fixed;
    cout.precision(6);
    cout << r * r * pi << '\n';
    cout << r*r*2 << '\n';
}