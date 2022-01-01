#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, n = 0;
    int two = 2, three = 6, four = 24, five = 120;
    while (1) {
        cin >> a;
        int x = a;
        if (a == 0) break;
        while (1) {
            if (x == 0) break;
            x /= 10;
            n++;
        }
        int sum = 0;
        if (n == 1)cout << a << '\n';
        else if (n == 2) cout << a / 10 * two + a % 10 << '\n';
        else if (n == 3) {
            sum += a / 100 * three;
            a %= 100;
            sum += a / 10 * two;
            sum += a % 10;
            cout << sum << '\n';
        }
        else if (n == 4) {
            sum += a / 1000 * four;
            a %= 1000;
            sum += a / 100 * three;
            a %= 100;
            sum += a / 10 * two;
            sum += a % 10;
            cout << sum << '\n';
        }
        else if (n == 5) {
            sum += a / 10000 * five;
            a %= 10000;
            sum += a / 1000 * four;
            a %= 1000;
            sum += a / 100 * three;
            a %= 100;
            sum += a / 10 * two;
            sum += a % 10;
            cout << sum << '\n';
        }
        n = 0;
    }
}