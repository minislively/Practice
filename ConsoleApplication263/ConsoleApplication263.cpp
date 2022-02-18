#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double l;
    cin >> l;
    cout << fixed;
    cout.precision(10);
    cout << l * l * sqrt(3) / 4;
}