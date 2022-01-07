#include<iostream>
#include<cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    while (1) {
        int b, n;
        cin >> b >> n;
        if (b == 0 && n == 0) break;
        for (int i = 1; i <= b; i++) {
            unsigned long long int x = pow(i, n);
            if (x >= b) {
                unsigned long long int y = pow(i - 1, n);
                if (x - b > b - y) cout << i - 1 << '\n';
                else if (x - b <= b - y) cout << i << '\n';
                break;
            }
        }
    }
}