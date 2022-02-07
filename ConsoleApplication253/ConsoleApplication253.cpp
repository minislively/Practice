#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, check = 0;
    cin >> a >> b;
    b = a + (b * 1000000);
    for (int i = 0; i < 2; i++) {
        for (int j = 2; j < a; j++) {
            if (a % j == 0) {
                cout << "No" << '\n';
                return 0;
            }
        }
        for (int k = 2; k < b; k++) {
            if (b % k == 0) {
                cout << "No" << '\n';
                return 0;
            }
        }
    }
    if (check == 0) cout << "Yes" << '\n';
}