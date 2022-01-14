#include<iostream>
#include<string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a, b;
    while (1) {
        int cnt = 0, x = 0;
        cin >> a >> b;
        if (a == "0" && b == "0") break;
        if (a.length() > b.length()) {
            for (int i = a.length() - 1; i >= 0; i--) {
                x = x + a[i] - '0';
                int y = b[i] - '0';
                if (x + y >= 10) {
                    cnt++;
                    x = 1;
                }
                else x = 0;
            }
            cout << cnt << '\n';
        }
        else if (a.length() <= b.length()) {
            for (int i = b.length() - 1; i >= 0; i--) {
                x = x + a[i] - '0';
                int y = b[i] - '0';
                if (x + y >= 10) {
                    cnt++;
                    x = 1;
                }
                else x = 0;
            }
            cout << cnt << '\n';
        }
    }
}