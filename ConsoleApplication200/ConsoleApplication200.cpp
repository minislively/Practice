#include<iostream>
using namespace std;
int main() {
    int n, a, b, c, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        sum = a + b + c;
        if (sum != 180)
            cout << a << " " << b << " " << c << " " << "Check" << '\n';
        if (sum == 180)
            cout << a << " " << b << " " << c << " " << "Seems OK" << '\n';
    }
}