#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int w, h;
    cin >> w >> h;
    double n = (w + h) - sqrt(w * w + h * h);
    cout << fixed;
    cout.precision(6);
    cout << n << '\n';
}